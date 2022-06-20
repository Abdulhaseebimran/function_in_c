#include<stdio.h>
#include<conio.h>

float ACbill();

void main(){
// clrscr();
printf("The quaterly bill is %.2f",ACbill());
getch();
}

float ACbill(){
float f3= 20;
float f4=20;
float f2=(f3+f4)/2;
float f1=f2 * 2;
float f5=(f1+f4)/2;
float totalAC=f1+f2+f3+f4+f5;
float perunit= 32;
float ACconsume=4;
float totalday=22;
float res=totalAC*ACconsume*perunit* totalday;
return res /4;
}
