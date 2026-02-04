#include <stdio.h>
#include <math.h>
int main (){
	double n;
	printf("Nhap vao n: ");
	while (scanf ("%lf",&n)!=1||n<=0||n>1000){
		printf("Nhap vao n: ");
		fflush (stdin); // xóa vung d?m    //cách 1 
		// ho?c 
		// while (getchar ()!='\n';      //cách 2 
}
	printf("Can bac 2 n la: %.2lf",sqrt(n));
	return 0;
	
}