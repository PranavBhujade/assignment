#include <stdio.h>

int main() {
    float num;
    printf("enter number: ");
    scanf("%f",&num);
    if(num>0){
        printf("number is positive");
    }
    if(num<0){
        printf("number is negative");
    }
    if(num==0){
        printf("number is zero");
    }
    return 0;
}