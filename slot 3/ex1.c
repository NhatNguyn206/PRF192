//1. khai báo 2 biến và khởi tạo cho  a , b ( nguyên ) tính cộng trừ nhân chia 
// in kết quả 
/*
vd : a = 7
b = 2
a Phép toán b Ket qua 
7 + 2 = 9
7 - 2 = 5
7 * 2 = 14 
7 / 2 =3.50
*/ 
#include <stdio.h>
int main (){
	int a = 7 , b = 2 ;
	printf ("a = %d\n",a);
	printf ("b = %d\n",b);
	int kq ;
	printf ("%d + %d = %d\n",a ,b ,kq=a+b);
	printf ("%d - %d = %d\n",a ,b ,kq=a-b);
	printf ("%d * %d = %d\n",a ,b ,kq=a*b);
	double c;
	printf ("%d / %d = %.2lf",a ,b,c=(double)a/b);
	return 0;
}