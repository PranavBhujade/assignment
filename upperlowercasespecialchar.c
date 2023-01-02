#include <stdio.h>

int main() {
    char ch;
    printf("enter character: ");
    scanf("%c",&ch);
    int ascii=ch;
    if(ascii>=65&&ascii<=90){
        printf("%c is an uppercase alphabet",ch);
    }
    if(ascii>=97&&ascii<=122){
        printf("%c is a lowercase alphabet",ch);
    }
    if(ascii>=33&&ascii<=47){
        printf("%c is a special character",ch);
    }
    return 0;
}