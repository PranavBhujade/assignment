#include <stdio.h>

void alpha() {
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
void areaofcircle() {
    float rad;
    printf("enter radius: ");
    scanf("%f",&rad);
    printf("area of circle is %f",3.14*rad*rad);
    return 0;
}
void ascii() {
    char ch;
    printf("enter character: ");
    scanf("%c",&ch);
    int ascii=ch;
    printf("ascii value of %c is %d",ch,ascii);
    return 0;
}
void digits() {
    int num,count=0;

    printf("enter a number: ");
    scanf("%d", &num);
    while(num > 0)
    {
        num = num / 10;
        count++;  
    }
    printf("number of digits in the number = %d", count);
    return 0;
}
void evenodd() {
    int num;
    printf("enter number: ");
    scanf("%d",&num);
    if(num%2==0){
        printf("even number");
    }
    else{
        printf("odd number");
    }
    return 0;
}
void factors() {
    int num;
    printf("enter number: ");
    scanf("%d",&num);
    printf("factors of %d are: ",num);
    for(int i=1;i<=num;i++){
        if(num%i==0){
            printf("%d ",i);
        }
    }    
    return 0;
}
void friendlypair() {
    int num1,num2,sum1,sum2 ,a,b;
    printf("enter two number: ");
    scanf("%d %d",&num1,&num2);
    printf("\ndivisors of %d are: \n",num1);
    for(int i=1;i<=num1-1;i++){
        if(num1%i==0){
            printf("%d ",i);
        }
        sum1=sum1+i;    
    }    
    printf("\ndivisors of %d are: \n",num2);
    for(int j=1;j<=num2-1;j++){
        if(num2%j==0){
            printf("%d ",j);
        }
        sum2=sum2+j;    
    }    
    a=sum1/num1;
    b=sum2/num2;
    if(a==b){
        printf("\nfriendly pair\n");
    }
    else{
        printf("\nnot a friendly pair\n");
    }
    return 0;
}
void greater() {
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
void greater1() {
    int a,b,c;
    printf("enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    if (a > b && a > c)
        printf("greatest number is %d", a);
    if (b > a && b > c)
        printf("greatest number is %d", b);
    if (c > a && c > b)
        printf("greatest number is %d", c);
    return 0;
}
void lcm() {
    int a,b,i;
    printf("Enter the two numbers: ");
    scanf("%d %d",&a,&b);
    int c = a*b;
    for(i=1;i<=c;i++){
       if(i%a==0 && i%b==0){
        printf("The LCM is: %d",i);
        break;
       } 
    }
    return 0;
}
void leapyear() {
    int year;
    printf("enter year: ");
    scanf("%d",&year);
    if(year%4==0){
        printf("%d is a leap year",year);
    }
    else{
        printf("%d is not a leap year",year);
    }
    return 0;
}
void perfectnum() {
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
int posneg() {
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
void power() {
    int num, i=1, product=1, power;
    printf("enter number: ");
    scanf("%d",&num);
    printf("enter the power: ");
    scanf("%d",&power);
    do{
        product=product*num;
        i++;
    }while(i<=power);
    printf("the answer is: %d",product);
    return 0;
}
void primenum() {
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
void rev_num()
{
int number, reverse_number = 0;
printf("Enter a number to reverse value:"); 
scanf("%d", &number); 
while (number != 0)
{
reverse_number = reverse_number * 10;
reverse_number = reverse_number + number % 10;
number = number / 10;
}
printf("Reverse of entered number is: %d", reverse_number); 
return 0;
}
void sumofdigits() {
    int num,sum=0,rem;    
    printf("Enter a number:");    
    scanf("%d",&num);    
    while(num>0)    
    {    
        rem=num%10;    
        sum=sum+rem;    
        num=num/10;    
    }    
    printf("Sum is=%d",sum); 
    return 0;
}
void naturalnum() {
    int num;int sum=0;
    printf("enter number: ");
    scanf("%d",&num);
    while(num>=0){
        sum=sum+num;
        num=num-1;
    }
    printf("the sum is: %d", sum);
    return 0;
}
void sumofrange() {
    int a; int b; int i; int sum;
    printf("enter the range of numbers: ");
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++){
        sum=sum+i;
    }
    printf("the sum of numbers from %d to %d is: %d",a,b,sum);
    return 0;
}
void swap() {
    int a,b;
    printf("enter number a: ");
    scanf("%d",&a);
    printf("enter number b: ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping a is= %d & b is= %d",a,b);
    return 0;
}
void upperlower() {
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
void vowels() {
    char ch;
    printf("enter alphabet: ");
    scanf("%c",&ch);
    if (ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i'|| ch=='I' || ch=='o' || ch=='O' || ch=='u'|| ch=='U'){
        printf("%c is a vowel", ch);
    }
    else{
        printf("%c is a consonant", ch);
    }
    return 0;
}
int main(){

    int x;
    printf("  press 1 for  alphabet  \n");
    printf("  press 2 for  areaofcircle \n");
    printf("  press 3 for  ascii \n");
    printf("  press 4 for  digitsofnumber \n");
    printf("  press 5 for  evenodd \n");
    printf("  press 6 for  factors \n");
    printf("  press 7 for  numberdiamond \n");
    printf("  press 8 for  friendlypair \n");
    printf("  press 9 for  greateroftwo \n");
    printf("  press 10 for  greaterofthree \n");
    scanf("%d",&x);
    switch(x){
        switch(x){
        case 1:
        void alpha();
        break;
        case 2:
        void areaofcircle();
        break;
        case 3:
        void ascii();
        break;
        case 4:
        void digits();
        break;
        case 5:
        void evenodd();
        break;
        case 6:
        void factors();
        break;
        case 7:
        void friendlypair();
        break;
        case 8:
        void greater();
        break;
        case 9:
        void greater1();
        break;
        case 10:
        void lcm();
        break;
        }       
    }   
