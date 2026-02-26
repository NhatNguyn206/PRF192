#include <stdio.h>

int main (){
    long long n, daoNguoc = 1;
    printf("Nhap vao so thap phan: ");
    while (scanf("%lld", &n) != 1 || n < 0){
        printf("Sai roi! Nhap lai n: ");
        while (getchar() != '\n');
    }
    if (n == 0){
        printf("He nhi phan la: 0");
        return 0;
    } 
    for ( ; n > 0 ; n /= 2){
        daoNguoc = daoNguoc * 10 + (n % 2);
    }
    printf("He nhi phan la: ");
    for ( ; daoNguoc > 1 ; daoNguoc /= 10){
        printf("%lld", daoNguoc % 10);
    }
    return 0;
}