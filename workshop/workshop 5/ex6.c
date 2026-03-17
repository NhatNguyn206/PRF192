#include <stdio.h>
#include <string.h>
int main() {
	system("cls");
	printf("\nINPUT:\n");
 	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
 	int n;
    char names[10][100];
    char temp[100];
	scanf("%d", &n);
    getchar(); // xóa \n sau khi nhập số
 	for (int i = 0; i < n; i++) {
        fgets(names[i], 100, stdin);
        names[i][strcspn(names[i], "\n")] = '\0';
    }
    
    // Sắp xếp (Bubble Sort) , tăng dần ạ
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
    
    printf("\nOUTPUT:\n");
  	//@STUDENT: ADD YOUR CODE FOR OUTPUT HERE:
  	for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }
return 0;
}