#include <stdio.h>
int main(){
	float cc , gk , ck;
	char diemChu;
	float dtb;
	printf ("Diem chuyen can ");
	if (scanf("%f", &cc) != 1 || cc < 0) {
    printf("Diem chuyen can khong hop le!\n");
    return 0;
}

	printf ("Diem giua ki ");
	if (scanf("%f",&gk) !=1 || gk<0 ){
		printf("Diem giua ki khong hop le!\n");
    	return 0;
	}
	printf ("Diem cuoi ky ");
	if (scanf("%f",&ck) !=1 || ck<0 ){
		printf("Diem cuoi ki khong hop le!\n");
    	return 0;
	}
		if (cc < 4 || gk < 4 || ck < 4 || diemChu == 'F'){
		printf("Khong du dieu kien tot nghiep!");
		return 0;
		}
	dtb = (cc*0.1)+(gk*0.3)+(ck*0.6);
	printf ("Diem tong ket:%.2f\n",dtb);
	if (dtb>=8.5 && dtb <=10){
		diemChu = 'A';
	}else if (dtb>=7){
		diemChu ='B';
	}else if (dtb>=5.5){
		diemChu ='C';
	}else if (dtb>=4){
		diemChu ='D';
	}else{
		diemChu ='F';
	}
	printf("Diem chu la: %c\n",diemChu);
	printf ("|%-15s|%-15s|%-15s|%-15s|%-15s|\n","Diem chuyen can","Diem giua ki","Diem cuoi ki","Diem tong ket","Diem chu la");
	printf ("|%-15.2f|%-15.2f|%-15.2f|%-15.2f|%-15c|\n",cc,gk,ck,dtb,diemChu);
	return 0;
}