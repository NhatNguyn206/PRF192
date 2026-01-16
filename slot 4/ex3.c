#include <stdio.h>
int main (){
	float a;
	printf("Nhap so thuc:");
	scanf ("%f",&a);
	printf("gia tri da nhap:%g\n",a);
 	int phan_nguyen = (int)a;
    float phan_thuc = a - phan_nguyen;

	printf("Phan nguyen la: %d\n",phan_nguyen);
	printf ("Phan thuc la :%.4f\n",phan_thuc);
	return 0;
}