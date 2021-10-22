#include<stdio.h>

int main()
{ int temp;
printf("Please put temperature:");
scanf("%d",&temp);


if (temp < 0 )
{printf("Freezing weather");}

else if (temp  >= 0 &&temp <= 10)
{ printf("Very Cold weather");}

else if ( temp  >= 10 &&temp <=20)
{ printf("Cold weather");}

else if (temp  >= 20 &&temp <=30)
{ printf("Normal in temp");}

else if (temp  >= 30 &&temp <=40)
{printf("It's Hot");}

else if ( temp >=40)
{printf(" It's Very Hot");}

return 0;
}
