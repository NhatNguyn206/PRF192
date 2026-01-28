#include<stdio.h>
int main (){
	float a,b,c;
	float max;
	printf ("Nhap a,b,c : ");
	scanf ("%f %f %f",&a,&b,&c);
	if (a>b && a>c){
		max =a;
	}else if(b>a && b>c){
		max=b;
	}else{
		max=c;
	}
	printf ("Gia tri cua max la :%.2f",max);
	return 0;
}