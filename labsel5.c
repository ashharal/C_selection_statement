/*
6.Accept three numbers from user and find out largest number among three and also find out
whether that three numbers are equal or not.(else if ladder)

*/
#include<stdio.h>
int main()
{
 int a,b,c;
 printf("enter the value of 3 integres");
 scanf("%d%d%d",&a,&b,&c);
 
 if(a>b && a>c)
 {
  printf("%d is the greatest number",a);
  }
  else if(b>a && b>c)
  {
  printf("%d is the greatest number",b);
  }
  else if(c>a && c>b)
  {
  printf("%d is the greatest number",c);
  }
  
  else
  {
  printf("the given numbers are equal");
  }
  return 0;
  }
  



