#include <stdio.h>
int main() {
    int n;
    printf("Nhap n:");
    while (scanf("%d", &n) != 1 || n <= 0 || n > 10) {
        printf("Nhap lai n:");
        fflush(stdin);
    }
    for (int count = 1; count <= n; count++) {
        printf("%d ", count);
    }
    printf("\n");
    for (int count = 1; count <= 10; count++) {
        printf("%d * %d = %d\n", n, count, n * count);
    }
    return 0;
}