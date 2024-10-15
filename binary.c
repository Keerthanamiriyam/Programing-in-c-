#include<stdio.h>
 void main()
{
int dec,rem,i=1,bin=0;
printf("the decimal number is:");
scanf("%d",&dec);
while(dec!=0)
{

rem=(dec%2);
dec/=2;
bin=bin+rem*i;
i=i*10;
}
printf("binary number is %d:",bin);
}
    