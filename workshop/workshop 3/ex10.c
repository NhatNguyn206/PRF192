#include <stdio.h>

int main (){
    long long soDu = 100000000;
    long long rut;
    int luaChon;

    printf("--------------------Mo phong ATM--------------------\n");

    for ( ; ; ){  
        printf("|%-15s|%-15s|%-15s|","1.Rut tien","2.Xem so du","3.Thoat");
        printf("\nMoi ban chon giao dich (1-3):");
        while (scanf("%d", &luaChon) != 1){
            printf("Sai roi! Moi ban chon giao dich (1-3): ");
            while (getchar() != '\n');
        }
        if (luaChon == 3){
            printf("Cam on ban da su dung dich vu!");
            return 0;
        }
        switch (luaChon){

            case 1:
                printf("Nhap so tien ban muon rut: ");
                if (scanf("%lld", &rut) != 1 || rut <= 0){
                    printf("Loi! So tien khong hop le.\n");
                    while (getchar() != '\n');
                }
                else if (rut > soDu){
                    printf("Giao dich that bai! So du khong du.\n");
                }
                else{
                    soDu -= rut;
                    printf("Ban da rut thanh cong %lld trong tai khoan\n", rut);
                    printf("So du con lai cua ban la: %lld\n", soDu);
                }
                break;

            case 2:
                printf("So du hien tai cua ban la: %lld\n", soDu);
                break;

            default:
                printf("Lua chon khong hop le!\n");
                break;
        }
        if (soDu < 10000){
            printf("--------------------------------\n");
            printf("So du hien tai %lld qua thap de giao dich!\n", soDu);
            printf("Cam on da su dung dich vu!");
            break;   
        }
    }
    return 0;
}