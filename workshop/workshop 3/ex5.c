#include <stdio.h>

int main (){
    int n;
    long long sum = 0;
    for ( ; ; ){
        printf("Nhap vao n (nhap 0 de dung chuong trinh):  ");
        while (scanf("%d", &n) != 1){
            printf("Sai roi! Nhap lai n: ");
            while (getchar() != '\n');
        }
        if (n == 0){
            break;  
        }
        if (n > 0){
            sum += n;
        } else {
            printf("so am khong duoc tinh vao tong!\n");
        }
    }
    printf("Tong so nguyen duong ban da nhap la: %lld", sum);
    return 0;
}