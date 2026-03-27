#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILE_NAME "products.bin"

typedef struct {
    int id;
    char name[50];
    float price;
    int quantity;
} Product;

void inputProduct(Product *p);
void clearInputBuffer();
void writeProducts(const char *filename, int numProducts);
void appendProducts(const char *filename, int numProducts);
void readProducts(const char *filename);
void modifyProduct(const char *filename);

int main() {
    const char *filename = "products.bin";
    int choice, n;

    do {
        printf("\n======= PRODUCT MANAGEMENT SYSTEM =======\n");
        printf("1. Write new products\n");
        printf("2. Add products\n");
        printf("3. Read products\n");
        printf("4. Edit product\n");
        printf("0. Exit\n");
        printf("Choose option: ");
        if (scanf("%d", &choice) != 1) {
            clearInputBuffer();
            printf("Invalid choice!\n");
            continue;
        }

        switch (choice) {
            case 1:
                printf("Enter number of products to write: ");
                if (scanf("%d", &n) == 1) {
                    if (n > 0) writeProducts(filename, n);
                    else printf("Quantity must be greater than 0!\n");
                } else {
                    clearInputBuffer();
                    printf("Input error!\n");
                }
                break;
            case 2:
                printf("Enter number of products to add: ");
                if (scanf("%d", &n) == 1) {
                    if (n > 0) appendProducts(filename, n);
                    else printf("Quantity must be greater than 0!\n");
                } else {
                    clearInputBuffer();
                    printf("Input error!\n");
                }
                break;
            case 3:
                readProducts(filename);
                break;
            case 4:
                modifyProduct(filename);
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 0);

    return 0;
}

// Function to clear input buffer
void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// Function to input product data
void inputProduct(Product *p) {
    printf("ID: ");
    if (scanf("%d", &p->id) != 1) {
        clearInputBuffer();
        printf("ID input error!\n");
        return;
    }
    clearInputBuffer();
    
    printf("Product name: ");
    fgets(p->name, sizeof(p->name), stdin);
    p->name[strcspn(p->name, "\n")] = 0;
    
    printf("Price: ");
    if (scanf("%f", &p->price) != 1) {
        clearInputBuffer();
        printf("Price input error!\n");
        return;
    }
    
    printf("Quantity: ");
    if (scanf("%d", &p->quantity) != 1) {
        clearInputBuffer();
        printf("Quantity input error!\n");
        return;
    }
    clearInputBuffer();
}

// Write products to file (wb - overwrite old data)
void writeProducts(const char *filename, int numProducts) {
    FILE *file = fopen(filename, "wb");
    if (file == NULL) {
        perror("Error opening file for writing");
        return;
    }
    
    Product p;
    for (int i = 0; i < numProducts; i++) {
        printf("\nProduct #%d:\n", i + 1);
        inputProduct(&p);
        fwrite(&p, sizeof(Product), 1, file);
    }
    
    fclose(file);
    printf("\nSuccessfully wrote %d products.\n", numProducts);
}
// Add products to file (ab - append to end)
void appendProducts(const char *filename, int numProducts) {
    FILE *file = fopen(filename, "ab");
    if (file == NULL) {
        perror("Error opening file to append");
        return;
    }

    Product p;
    for (int i = 0; i < numProducts; i++) {
        printf("\nEnter product to add:\n");
        inputProduct(&p);
        fwrite(&p, sizeof(Product), 1, file);
    }

    fclose(file);
    printf("\nSuccessfully added %d products.\n", numProducts);
}

// Read and display all products (rb - read mode)
void readProducts(const char *filename) {
    FILE *file = fopen(filename, "rb");
    if (file == NULL) {
        printf("No data found or file does not exist.\n");
        return;
    }

    Product p;
    printf("\n|%-10s| %-25s| %-12s| %-10s|\n", "ID", "Product name", "Price", "Quantity");
    printf("|----------|--------------------------|-------------|-----------|\n");

    while (fread(&p, sizeof(Product), 1, file)) {
        printf("|%-10d| %-25s| %-12f| %-10d|\n", p.id, p.name, p.price, p.quantity);
    }

    fclose(file);
}

// Search and edit product (rb+ - read and write mode)
void modifyProduct(const char *filename) {
    FILE *file = fopen(filename, "rb+");
    if (file == NULL) {
        perror("Error opening file for editing");
        return;
    }

    int searchID, found = 0;
    Product p;

    printf("Enter product ID to edit: ");
    if (scanf("%d", &searchID) != 1) {
        clearInputBuffer();
        printf("ID input error!\n");
        fclose(file);
        return;
    }

    while (fread(&p, sizeof(Product), 1, file)) {
        if (p.id == searchID) {
            found = 1;
            printf("Product found! Enter new information:\n");
            clearInputBuffer();
            
            printf("New name: ");
            fgets(p.name, sizeof(p.name), stdin);
            p.name[strcspn(p.name, "\n")] = 0;
            
            printf("New price: ");
            if (scanf("%f", &p.price) != 1) {
                clearInputBuffer();
                printf("Price input error!\n");
                break;
            }
            
            printf("New quantity: ");
            if (scanf("%d", &p.quantity) != 1) {
                clearInputBuffer();
                printf("Quantity input error!\n");
                break;
            }

            // Move pointer to the beginning of current record
            fseek(file, -sizeof(Product), SEEK_CUR);
            fwrite(&p, sizeof(Product), 1, file);
            break;
        }
    }

    if (!found) 
        printf("Product ID %d not found.\n", searchID);
    else 
        printf("Product updated successfully!\n");

    fclose(file);
}
