#include <stdio.h>

int main() {
    int num, sum; 
    printf("enter number: ");
    scanf("%d",&num);
    for(int i=1;i<=num-1;i++){
        if(num%i==0){
            sum=sum+i;
        }
    }
    if(sum==num){
        printf("it is a perfect number");
    }
    else{
        printf("it is not a perfect number");
    }
    return 0;
}