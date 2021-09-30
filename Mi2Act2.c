#include<stdio.h>

int main()
{
 int rpm=3000,
     secs=60,
     deg=360,
     result;
 printf("enter the number:\n"); 
 scanf("%d",rpm); 
 printf("enter the number:\n");
 scanf("%d",secs);
 printf("enter the number:\n");
 scanf("%d",deg);   

   //answer
 result=rpm/secs*deg;
 printf("%d rpm divide %d secs multiply %d deg is %d Degrees rotation in one second",rpm,secs,deg,result);
  return;      
}