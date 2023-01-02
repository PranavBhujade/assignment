#include <stdio.h>

int main() {
    int num; int point=0;
    printf("enter number: ");
    scanf("%d",&num);
    for(int i=2;i<=num-1;i++){
        if(num%i==0){
            printf("%d is not a prime number", num);
            point=1;
            break;
        }
    }
    if(point==0){
        printf("%d is a prime number", num);
    }
    return 0;
}