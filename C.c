#include<stdio.h>

int main()
{int a;
    printf("Input Any Positive Integers:");
    scanf("%d",&a);
   while(a>1)
{
if(a%2==0)
{ a=a/2;
printf("Current Given Value is %d\n",a);
}

else
{ a=3*a+1;
printf("Current Given Value is %d\n",a);
}
}
return 0;
}