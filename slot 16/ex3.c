#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
/*   này là dùng hàm con trỏ á:
void reversePrint(char *str){
    char *p = str + strlen(str) - 1;   // trỏ tới ký tự cuối

    while(p >= str){
        printf("%c", *p);
        p--;   // lùi con trỏ
    }
}

đây nữa
 void reverse(char *str){
    char *start = str;
    char *end = str + strlen(str) - 1;
    char temp;

    while(start < end){
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

*/

int main(){
    char *str = (char *)malloc(100 * sizeof(char));
    if(str == NULL){
        printf("Cap phat bo nho that bai");
        return 1;
    }

    fgets(str, 100, stdin);
    int n = strlen(str);
    printf ("%d\n",sizeof (str));
    // bỏ kí tự xún dòng.
    str[strcspn(str,"\n")] = '\0';
    for (int i=n-1;i>=0;i--){
  	if (str[i]!=' '){
  		printf ("%c",str[i]);
	  }
    }
    free(str); 
    return 0;
}
