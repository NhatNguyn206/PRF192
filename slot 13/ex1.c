#include<stdio.h>
#include <math.h>
void doubleX(int x){
	x = x + x;	
}
void doubleX2(int *p){
	*p = *p + *p;
}
void inputArr(int a[], int n){
	for (int i=0;i<n;i++){
		scanf ("%d",&a[i]);
	}
}
void outputArr(int a[],int n){
	for (int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
int isPrime(int n){
	for (int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return n>1;
}
int countPrimes(int a[],int n) {
	int count =0;
	for (int i=0;i<n;i++){
		if (isPrime(a[i])){
			count ++;
		}
	}
	return count;
}
int main(){
	int x = 10;
	doubleX2(&x);
	printf("Gia tri x= %d: ", x);
	int n;
	printf("\nNhap vao n:");
	scanf("%d",&n);
	int a[n];
	inputArr(a, n);
	outputArr(a, n);
	int ketqua = countPrimes(a, n);
	printf("\nSo luong so nguyen to trong mang la: %d", ketqua);
	return 0;
}