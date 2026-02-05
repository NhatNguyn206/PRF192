#include <stdio.h>
#include <math.h>
int main (){
	double n;
	int count = 0 ;
	while (1){
		printf("Nhap vao n: ");
		while (scanf ("%lf",&n)!=1||n<=0||n>1000){
		printf("Nhap lai n: ");
		fflush (stdin);  
    }
	printf("Can bac 2 n la: %.2lf\n",sqrt(n));
	count ++;
	if (count ==5){
		break;
	}
	}
	printf("Da xong! Xuat sac!");
	return 0;
}
