// baitap2.txt 
// nhap vao n và nhập vào từng phần tử của mảng , đọc dữ liệu từ file và in ra màn hình
// nội dung của file baitap2.txt là: 
// 5
// 1 -5 0 7 9
#include <stdio.h>
int main (){
    FILE *fp;
    fp = fopen ("baitap2.txt", "w");
    if (fp==NULL){
        printf("Error!\n");
        return 0;
    }
    int n;
    printf ("Nhap vao so n:");
    scanf ("%d", &n);
    fprintf (fp, "%d\n", n);
    // khai báo mảng số nguyên arr
    int arr[n];
    for (int i=0;i<n;i++){
        scanf ("%d", &arr[i]);
        fprintf (fp, "%d\t", arr[i]);
    }
    fclose(fp);
    // mở file để đọc
    fp = fopen ("baitap2.txt", "r");
    if (fp == NULL) {
             printf("Error!\n");
        return 0;
    }
    printf ("Noi dung file:\n");
    int m;
    if (fscanf(fp, "%d", &m) != EOF) {
        printf("%d\n", m);
        int value;
        for (int i = 0; i < m; i++) {
            if (fscanf(fp, "%d", &value) != EOF) {
                printf("%d\t", value);
            }
        }
    }
    fclose(fp);
    return 0;
}
