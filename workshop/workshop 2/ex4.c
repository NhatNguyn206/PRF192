#include <stdio.h>
int main (){
	int n;
	long long temp=0;
	printf("Nhap vao n:");
	while (scanf ("%d",&n)!=1){
		printf("Nhap lai n:");
		while(getchar() != '\n');
	}
	while (n!=0){
		temp *=10;
		temp += n%10;
		n /=10;
	}
	printf ("n sau khi dao nguoc la: %lld",temp);
	return 0;
}