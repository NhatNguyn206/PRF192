#include <stdio.h>
int namNhuan(int year){
	if ((year % 4 ==0 && year % 100 !=0) || year % 400 == 0){
		return 1;
	}
	return 0;
}

int get_days_in_month(int month, int year){
	switch (month){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			return 31;	
		
		case 4:
		case 6:
		case 9:
		case 11:
			return 30;
			
		case 2:
			if (namNhuan(year)){
				return 29;
			}
			return 28;
			break;
			
		default :
			return -1;
			break;
	}
}

int main (){
	int year , month ;
	printf ("Nhap vao thang:");
	scanf ("%d",&month);
	printf ("Nhap vao nam:");
	scanf ("%d",&year);
	int ngay_Trong_thang = get_days_in_month(month,year);
	if (ngay_Trong_thang==-1){
		printf("Khong hop le!");
	}else {
		printf("So ngay trong thang %d va nam %d cua ban la: %d",month,year,ngay_Trong_thang);
	}
	return 0;
}







