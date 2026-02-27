// tính tổng các ước số của N , viết hàm trả về số lớn nhất trong 3 số , viết hàm in ra mã ASCII của các kí tự từ a đến z.
#include <stdio.h>
int sum (int n){
	int tong=0;
	for (int i=1;i<=n;i++){
		if (n%i==0){
			tong+=i;
		}
	}
	return tong;
}
int main (){
	int n;
	if (scanf ("%d",&n)!=1){
		return 0;
	}
	int ketqua = sum(n);
	printf("%d",ketqua);
	return 0;
}