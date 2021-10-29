#include<stdio.h>

int main()
{int selection,price,payment,change;
printf("Select your order\n");
printf("[1] Pepsi(90):\n[2] Dr.Pepper(120):\n[3] Coca-cola(95):");
printf("\nchoice:"); 
scanf("%d",&selection);  

switch(selection){
case 1:
price=90;
printf("Input Payment:");
scanf("%d",&payment);
if (payment>=price)
{
printf("you have purchased Pepsi.\n");
change=payment-price;
printf("change:%d",change);
}
else { 
printf("you don't have enough funds");
}
break;

case 2:
price=120;
printf("Input Payment:");
scanf("%d",&payment);
if (payment>=price)
{
printf("you have purchased Dr.Pepper.\n");
change=payment-price;
printf("change:%d",change);
}
else { 
printf("you don't have enough funds");
}
break;

case 3:
price=95;
printf("Input Payment:");
scanf("%d",&payment);
if (payment>=price)
{
printf("you have purchased Coca-cola.\n");
change=payment-price;
printf("change:%d",change);
}
else { 
printf("you don't have enough funds");
}
break;

default: printf("invalid input");}
return 0;
}