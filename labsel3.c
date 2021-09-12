/*
WAP to accept Cost Price from user and ask whether the user is a student or not. If the user
is student and cost price is greater than 500, give discount of 10% ELSE discount will be 5%. If
user is not student and cost price is greater 500 then give discount of 8% ELSE discount will be
2%. (Take all inputs from USER)

*/

#include<stdio.h>
int main()
{
 int cp;
 char stud,user, Y,N;
  
  printf("is the user is student?(Y/N) ");
  scanf("%c",&user);
  
  printf("enter the cost price ");
  scanf("%d",&cp);
  
  if(user=Y)
  {
   if(cp>500)
   { 
    printf("discout on %d= 10 percent ",cp);
    printf(\n " new Cp=%d" ,(cp -cp*(100-10)/100);
    }
    else if(cp<500)
    {
    printf("discout on %d =5 percent",cp);
    }
    
  }
  
  else if(user=N)
  {
   if(cp>500)
   { 
    printf("discout on %d= 8 percent",cp);
    }
    else if(cp<500)
    {
    printf("discout on %d =2 percent",cp);
    }
    
  }
 
  
  return 0;
  }

