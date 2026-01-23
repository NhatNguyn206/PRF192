#include <stdio.h>
int main (){
	float km  ;
	int time;
	float money=0;
	printf ("So km ");
	if (scanf("%f", &km) != 1 || km < 0) {
        printf("Nhap sai\n");
        return 0;
    }
	printf ("so phut cho ");
	if (scanf("%d", &time) != 1 || time < 0) {
        printf("Nhap sai\n");
        return 0;
    }
	if (km <= 0.5) {
        money = 12000;
    } else if (km <= 30) {
        money = 12000 + (km - 0.5) * 15000;
    } else {
        money = 12000 + (30 - 0.5) * 15000 + (km - 30) * 12000;
    }


	if (time>5){
		money +=(time-5)*1000;
	}
	printf("\n-------------------------------------------\n");
	printf("%-15s | %-15s | %-10s\n", "So km", "So phut cho", "Tong tien");
	printf("-------------------------------------------\n");
	printf("%-15.2f | %-15d | %-10.0f\n", km, time, money);
	return 0;
}