
#include <stdio.h>
int main (){
	int a , b ,kq;
	char c;
	int sum =scanf("%d,%d",&a,&b);
	if (sum!=2){
		printf ("Nhap sai");
		return 0;
	}
	fflush(stdin);
	scanf ("%c",&c);
	switch (c){
		case '+':
			kq=a+b;
			break;
		case '%':
			if (b!=0){
			kq=a%b;	
			}else{
				printf("Khong the chia cho 0!\n");
				return 0;
			}
			break;
		case '/':
			if (b!=0){
				float kq=(float)a/b;
				printf("%d %c %d = %.1f",a,c,b,kq);
				return 0;
			}else{
				printf("Khong the chia cho 0!\n");
				return 0;
			}
			break;
		default :
			printf("phep toan khong hop le, Nhap sai!\n");
	}
	printf ("%d %c %d = %d",a,c,b,kq);
	return 0;
}