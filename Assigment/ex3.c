// baitap3
/*
Nhap vao thong tin cua 1 sinh vien
ghi thong tin vao file baitap3.txt 
101
Bao Han nc
5.5
đọc thông tin từ file
in ra màn hình
*/ 
#include <stdio.h>
#include <string.h>

struct Sinhvien {
    int id;
    char name[50];
    float grade;
};

int main() {
    FILE *fp;

    // Ghi file
    fp = fopen("baitap3.txt", "w");
    if (fp == NULL) {
        printf("Error!\n");
        return 0;
    }

    struct Sinhvien sv;

    printf("Nhap vao id: ");
    scanf("%d", &sv.id);
    getchar(); // FIX lỗi

    printf("Nhap vao ten: ");
    fgets(sv.name, sizeof(sv.name), stdin);
    sv.name[strcspn(sv.name, "\n")] = '\0';

    printf("Nhap vao diem: ");
    scanf("%f", &sv.grade);

    fprintf(fp, "%d\n%s\n%.2f\n", sv.id, sv.name, sv.grade);
    fclose(fp);

    // Đọc file
    fp = fopen("baitap3.txt", "r");
    if (fp == NULL) {
        printf("Error!\n");
        return 0;
    }

    struct Sinhvien sv_read;

    fscanf(fp, "%d", &sv_read.id);
    fgetc(fp); // bỏ newline

    fgets(sv_read.name, sizeof(sv_read.name), fp);

    fscanf(fp, "%f", &sv_read.grade);

    printf("\nThong tin doc tu file:\n");
    printf("ID: %d\n", sv_read.id);
    printf("Ten: %s", sv_read.name);
    printf("Diem: %.2f\n", sv_read.grade);

    fclose(fp);

    return 0;
}