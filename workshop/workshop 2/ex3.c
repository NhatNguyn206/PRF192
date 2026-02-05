#include <stdio.h>
int main (){
	int n ;
	int count =1;
	printf("Nhap n:");
	while (scanf ("%d",&n)!=1||n<=0||n>10){
		printf("Nhap lai n:");
		fflush (stdin);
	}
	while (count<=n){
	 printf("%d ",count);
	 count++;
	}
	count = 1;
	printf("\n");
	while (count <=10){
	printf ("%d * %d = %d\n",n,count,n*count);
	count ++;
	}
	return 0;  
}
