#include <stdio.h>

int main (){
    int n;
    int check = 0;
    printf("Nhap vao n: ");
    while (scanf("%d", &n) != 1 || n < 0){
        printf("Khong hop le! Nhap lai n: ");
        while (getchar() != '\n');
    }
    for (int i = 0; i * i <= n; i++){
        if (i * i == n){
            check = 1;
            break;
        }
    }
    if (check == 1){
        printf("%d la so chinh phuong", n);
    } else {
        printf("%d khong phai la so chinh phuong", n);
    }
    return 0;
}