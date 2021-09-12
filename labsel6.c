/*5. WAP a program to accept Percentage from user and check the GRADE
A. Above 70% - Grade A
B. Between 60% to 70% - Grade B+.
C. Between 45% to 60% - Grade B.
D. Between 35% to 45% - Grade C.
E. Less than 35% - Fail

*/
#include<stdio.h>
int main()
{
 int per;
 printf("enter the percentage of student ");
 scanf("%d",&per);
 
 if(per>70 && per<=100)
 {
 printf("congratulations !! You have passed with Grade A");
 }
 else if(per>60 && per <=70)
 {
 printf("congratulations !! You have passed with Grade B+");
 }
 else if(per>45 && per <=60)
 {
 printf("congratulations !! You have passed with Grade B");
 
 }
 else if(per>35 && per <=45)
 {
 printf("congratulations !! You have passed with Grade c");
 }
 else
 {
 
 printf("SORRY !! You are fail . Better luck next time");
 }
 return 0;
 }

 
 
 

