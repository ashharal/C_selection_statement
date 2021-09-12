//1. WAP to check whether a number is even or odd

#include<stdio.h>
int main()
{
int num;
printf("enter any number");
scanf("%d",&num);

if(num%2==0)
{
printf("\nthe given number is even");
}
else
{
printf("\nthe given number is odd");
}
return 0;
}
