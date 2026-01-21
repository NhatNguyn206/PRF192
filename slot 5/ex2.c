#include <stdio.h>
//In ra giá trị max trong 3 số thực a,b,c
int main(){
	float a,b,c;
	scanf ("%f",&a);
	scanf ("%f",&b);
	scanf ("%f",&c);
	float max=a;
	if (b>max){
		max = b;
	}
	if (c>max){
		max =c;
	}
	printf("Gia tri lon nhat la : %.2f",max);
}