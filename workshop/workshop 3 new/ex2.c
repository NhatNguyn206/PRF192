#include <stdio.h>
int calculate_taxi_fare(float distance){
	float fee;
	if (distance<=1){
		fee = 15000;
	}else if (distance<=30){
		fee = 15000 + (distance -1 )*12000;
	}else{
		fee = 15000 + 20*12000 + (distance - 30)*10;
	}
	return fee;
}
int main (){
	float distance;
	printf ("Nhap vao so km: ");
	if (scanf ("%f",&distance)!=1 || distance <=0 ){
		printf ("Nhap sai!");
		return 0;
	}
	double gia =  calculate_taxi_fare(distance);
	printf ("So tien ban phai tra la: %.0lf.VND",gia);
	return 0;
}