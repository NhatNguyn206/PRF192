#include <stdio.h>
int main (){
	int n;
	int i = 0;
	int check =0;
	printf("Nhap vao n: ");
	while (scanf ("%d",&n)!=1||n<0){
	printf("Khong phai so chinh phuong! Nhap lai n: ",n);
	while (getchar() != '\n');
	}
	while (i*i<=n){
		if (i*i==n){
			check =1;
			break;
		}
		i++;
	}
	if (check ==1 ){
		printf("%d la so chinh phuong",n);
	}else {
		printf("%d khong phai la so chinh phuong",n);
	}
	return 0;
}