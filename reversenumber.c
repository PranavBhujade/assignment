#include<stdio.h>

int main()
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