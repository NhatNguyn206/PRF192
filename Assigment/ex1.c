// tạo file text có tên là ex1.txt
// đọc nội dung ở file này và in ra màn hình console
#include <stdio.h>
int main (){
    FILE *fp;
    fp = fopen("baitap1.txt", "w");
    // kiểm tra thành công
    if (fp == NULL) {
        printf("Error!\n");
        return 0;
    }
    int n;
    printf ("Nhap vao so n:");
    scanf ("%d", &n);
    fprintf (fp,"Gia tri n: %d", n);
    // đóng file
    fclose(fp);
    // mở file để đọc
    fp =fopen ("baitap1.txt", "r");
    if (fp == NULL) {
        printf("Error!\n");
        return 0;
    }
    char s;
    do {
        s=getc(fp); // đọc từng ký tự
        printf ("%c", s);
    } while (s != EOF);
    fclose(fp);
    return 0;
}