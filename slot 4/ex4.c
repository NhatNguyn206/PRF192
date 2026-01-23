#include <stdio.h>
// TC1 khai báo a b nguyên , nhập a,b : 7,2   nhập phép toán : /     kết quả 7/2 = 3.50    
//TC2 nhập a, b :7 ,0   nhập phép toán /       không thẻ chia không 
int main (){
	int a,b;
	char c;
	printf ("Nhap a , b :");
	scanf ("%d,%d",&a,&b);
	printf("Nhap phep toan: ");
	//fflush(sdtin); xóa vùng đệm
	scanf(" %c", &c);
	if (c=='/'){
	if (b!=0){
		printf("Ket qua : %d / %d = %.2f\n", a, b, (float)a / b);
	}else{
		printf ("Khong the chia cho 0");
	}
}
	return 0;
}