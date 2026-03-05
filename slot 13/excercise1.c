#include <stdio.h>
#define MAX 100
// thêm giá trị
void addValue (int a[], int *n){
	int x;
	if (*n>=MAX){
		printf ("Mang da day!\n");
		return;
	}
	printf ("Nhap vao gia tri muon them:");
	while  (scanf ("%d",&x)!=1){
		printf ("\nNhap sai! Nhap lai: ");
		while (getchar() != '\n');
	}
	a[*n]=x;
	(*n)++;
	printf ("Da them gia tri thanh cong!\n");
}
// tìm giá trị
void searchValue (int a[],int n){
	int x , found =0;
	printf ("Gia tri can tim la: ");
	while  (scanf ("%d",&x)!=1){
		printf ("\nNhap sai! Nhap lai: ");
		while (getchar() != '\n');
	}
	for (int i=0;i<n;i++){
		if (a[i]==x){
			printf("Gia tri can tim tai index: %d\n",i);
			found =1;
		}
	}
	if (found ==0){
		printf ("Gia tri khong duoc tim thay!\n");
	}	
}
//Xóa bỏ sự tồn tại đầu tiên của gía trị
void removeFirst (int a[],int *n){
	int x , xoa = -1;
	printf ("Gia tri can xoa la: ");
	while (scanf ("%d",&x)!=1){
		printf ("\nNhap sai! Nhap lai:");
		while (getchar() != '\n');
	}
	for (int i=0;i<*n;i++){
		if (a[i]==x){
			xoa = i;
			break;
		}
	}
	if (xoa==-1){
		printf ("Khong tim thay gia tri!\n");
	}
	for(int i=xoa;i<*n-1;i++){
		a[i]=a[i+1];
	}
	(*n)--;
	printf ("Da xoa gia tri dau tien ban muon!\n");
}
// xóa bỏ mọi sự tồn tại của giá trị đó 
void removeAll(int a[],int *n){
	int x ,i=0;
		printf ("Gia tri can xoa tat ca la: ");
	while (scanf ("%d",&x)!=1){
		printf ("\nNhap sai! Nhap lai:");
		while (getchar() != '\n');
	}
	while (i<*n){
		if (a[i]==x){
			for (int j=i;j<*n-1;j++){
				a[j]=a[j+1];
		}
		(*n)--;
		}else {
			i++;
	}
	}
	printf ("Da xoa toan bo gia tri!\n");
}
//in mảng ra màn hình
void printArray(int a[],int n){
	if (n==0){
		printf ("Mang hien tai dang rong!\n");
		return ;
	}
	for (int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}
// in tăng dần 
void printAscending(int a[],int n){
	int temp [MAX];
	for (int i=0;i<n;i++){
		temp[i] = a[i];;
	}
      // giờ chuyển nè
    for (int i=0;i<n-1;i++){
    	for (int j=i+1;j<n;j++){
    		if (temp[i]>temp[j]){
    			int swap = temp [i];
    			temp [i]= temp[j];
    			temp [j]= swap;
			}
		}
	}
	printf("Mang tang dan la: ");
    for (int i = 0; i < n; i++)
    printf("%d ", temp[i]);
    printf("\n");
	
}
// in giảm dần , giữ nguyên mảng gốc
void printDescending (int a[],int n){
	int temp [MAX];
	for (int i=0;i<n;i++){
		temp [i]=a [i];
	}

    for (int i=0;i<n-1;i++){
    	for (int j=i+1;j<n;j++){
    		if (temp[i]<temp[j]){
    			int swap = temp [i];
    			temp [i]= temp[j];
    			temp [j]= swap;
			}
		}
	}
	printf("Mang giam dan la: ");
    for (int i = 0; i < n; i++)
    printf("%d ", temp[i]);
    printf("\n");	
}
	
int main (){
	int a[100];
	int n=0;
	int choice;
    do {
        printf("\n-------------------- MENU --------------------\n");
        printf("1. Them gia tri\n");
        printf("2. Tim gia tri\n");
        printf("3. Xoa gia tri dau tien\n");
        printf("4. Xoa tat ca gia tri \n");
        printf("5. In ra mang\n");
        printf("6. Sap xep tang dan\n");
        printf("7. Sap xep giam dan\n");
        printf("0thers. Quit\n");
        printf("Chon: ");
        scanf ("%d",&choice);

        switch (choice) {
            case 1: addValue(a, &n); break;
            case 2: searchValue(a, n); break;
            case 3: removeFirst(a, &n); break;
            case 4: removeAll(a, &n); break;
            case 5: printArray(a, n); break;
            case 6: printAscending(a, n); break;
            case 7: printDescending(a, n); break;
            case 0: printf("Thoat chuong trinh!\n"); break;
        	default: printf("Lua chon khong hop le!\n");
        }
    } while (choice !=0);
	return 0;
}