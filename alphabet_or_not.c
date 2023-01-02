#include <stdio.h>

int main() {
    char ch;
    printf("enter character: ");
    scanf("%c",&ch);
    int ascii=ch;
    if(ascii>=65&&ascii<=90 || ascii>=97&&ascii<=122){
        printf("this character is an alphabet");
    }
    else{
        printf("this is not an alphabet");
    }
    return 0;
}