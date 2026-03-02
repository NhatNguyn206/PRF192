#include <stdio.h>
int calculate_salary(float hours, float rate){
	float salary;
	if (hours<=40){
		salary = hours *rate;
	}else{
		float overtime = hours - 40 ;
		salary = 40 * rate + overtime *1.5*rate;
	}
	return salary;
}

int main (){
	float hours , rate ;
	printf ("So gio ban lam la: ");
	if (scanf ("%f",&hours)!=1 || hours <=0){
		printf ("Nhap sai!");
		return 0;
	}
	printf ("So luong moi gio la: ");
	if (scanf ("%f",&rate)!=1 || rate <=0){
		printf ("Nhap sai!");
		return 0;
	}
	float luongTong = calculate_salary(hours,rate);
	printf("So luong cua ban la :%.3f",luongTong);
	return 0;
}