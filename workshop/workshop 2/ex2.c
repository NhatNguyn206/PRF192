#include <stdio.h>
#include <math.h>
int main (){
	double n;
	int count = 0 ;
	while (count <5){
		printf("Nhap vao n: ");
		while (scanf ("%lf",&n)!=1||n<=0||n>1000){
		printf("Nhap lai n: ");
		fflush (stdin);  
    }
	printf("Can bac 2 n la: %.2lf\n",sqrt(n));
	count ++;
	}
	printf("Da xong! Xuat sac!");
	return 0;
}