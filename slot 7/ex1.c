#include <stdio.h>
int main (){
	int a ;
	int quy;
	printf("Nhap vao thang: ");
	int kq = scanf("%d",&a);
	if (kq !=1 || a >12 ||a <1){
		printf("Nhap sai");
		return 0;
	}
	switch(a){
		case 1:
		case 2:
		case 3:
			quy = 1;
			break;
		case 4:
		case 5:
		case 6:
			quy = 2;
			break;
		case 7:
		case 8:
		case 9:
			quy=3;
			break;
		case 10:
		case 11:
		case 12:
			quy = 4;
			break;
		default :
			printf("cu phap khong hop le, Nhap sai!");
			break;
	}
	printf("thang %d thuoc quy %d ",a , quy);
	return 0;
}