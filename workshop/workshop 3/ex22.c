#include <stdio.h>
#include <math.h>

int main (){
    double n;
    for (int count = 0; count < 5; count++){
        printf("Nhap vao n: ");
        while (scanf("%lf", &n) != 1 || n <= 0 || n > 1000){
            printf("Nhap lai n: ");
            while (getchar() != '\n');   // xoa bo dem
        }
        printf("Can bac 2 n la: %.2lf\n", sqrt(n));
    }

    printf("Da xong! Xuat sac!");
    return 0;
}