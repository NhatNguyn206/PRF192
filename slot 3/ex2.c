/*
khai bao kiểu kí tự trên kt , khưởi gán giá trị cho biến này 
in ra: giá trị của biến:
giá trị thập phân , giá trị hex, giá trị của octal
kích thước kiểu dữ liệu của biến kt
*/


#include <stdio.h>
int main (){
    char kt = 'a';
    printf("| %-8s | %-12s | %-20s | %-20s | %-20s | %-10s |\n",
           "Ten Bien", "Gia Tri", "Dec", "Hexadecimal", "Octal", "Size");
    printf("| %-8s | %-12c | %-20d | %-20x | %-20o | %-10zu |\n",
           "kt", kt, kt, kt, kt, sizeof(kt));

    return 0;
}
