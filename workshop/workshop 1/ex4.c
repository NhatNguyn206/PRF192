#include <stdio.h>
int main (){
	int tien=0;
	int kwh;
	printf("Nhap so kwh ban su dung :");
	scanf ("%d",&kwh);
	if (kwh<=100){
		tien = kwh*950;
	}else if (kwh<=150){
		tien = 100*950 + (kwh-100)*1250;
	}else if (kwh<=200){
		tien =100*950 +50*1250+(kwh-150)*1350;
	}else if (kwh>200){
		tien = 100*950+50*1250+50*1350+(kwh-200)*1550;
	}
	printf("Tien dien cua ban la : %d",tien);
	return 0;
	
}