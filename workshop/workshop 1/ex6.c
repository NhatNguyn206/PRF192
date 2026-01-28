#include <stdio.h>
int main(){
	float cc , gk , ck;
	char diemChu;
	float dtb;
    printf("Nhap diem cc, gk, ck: ");
    if (scanf("%f %f %f", &cc, &gk, &ck) != 3 || cc < 0 || gk < 0 || ck < 0)
        return printf("Mot trong cac diem khong hop le!\n"), 0;


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
	if (cc < 4 || gk < 4 || ck < 4 || diemChu == 'F'){
		printf("Khong du dieu kien tot nghiep!");
		return 0;
	}
	printf ("|%-15s|%-15s|%-15s|%-15s|%-15s|\n","Diem chuyen can","Diem giua ki","Diem cuoi ki","Diem tong ket","Diem chu la");
	printf ("|%-15.2f|%-15.2f|%-15.2f|%-15.2f|%-15c|\n",cc,gk,ck,dtb,diemChu);
	return 0;
}