#include <stdio.h>

int main() {
    int a,b;
    printf("enter two numbers: ");
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("a is greater than b");
    }
    if(b>a){
        printf("b is greater than a");
    }
    if(a==b){
        printf("same numbers");
    }
    return 0;
}