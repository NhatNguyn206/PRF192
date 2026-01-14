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
	double kq ;
	kq=a+b;
	printf ("%.0d + %.0d = %.0lf \n",a ,b,kq);
	kq=a-b;
	printf ("%.0d - %.0d = %.0lf \n",a ,b,kq);
	kq=a*b;
	printf ("%.0d * %.0d = %.0lf \n",a,b,kq);
	printf ("%.0d / %.0d = %.2lf",a,b,kq=(double)a/b);
	return 0;
}