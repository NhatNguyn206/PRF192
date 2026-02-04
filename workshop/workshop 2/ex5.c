#include <stdio.h>
int main (){
	int n;
	long long sum=0;
	while (1){
	printf ("Nhap vao n (nhap 0 de dung chuong trinh):  ");
	while (scanf ("%d",&n)!=1){
		printf("Sai roi! Nhap lai n: ");
		while (getchar() != '\n');
	}
	if (n>0){
		sum +=n;
	}else if (n<0){
		printf("so am khong duoc tinh vao tong!\n");
	}else {
		break;
	}
	}
	printf("Tong so nguyen duong ban da nhap la: %lld",sum);
	return 0;
}