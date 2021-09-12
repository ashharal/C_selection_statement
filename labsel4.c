//WAP to check whether Number is positive or negative or ZERO.

#include<stdio.h>
int main()
{
int num;
printf("enter any number");
scanf("%d",&num);

if(num>0)
{ 
printf("%d is positive",num);
}
else if(num <0)
{ 
printf("%d is negative",num);
}
else 
{
printf("%d 0",num);
}
return 0;
}


