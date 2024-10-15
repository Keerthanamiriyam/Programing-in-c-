#include<stdio.h>
int main()
{
    int units;
    float bill;
    printf("enter the electricity units:");
    scanf("%d",&units);
    if(units<=50)
    printf("electricity bill is %f",units*0.5);
    else if(units<=150)
    {
    bill = (50 * 0.50) + ((units - 50) * 0.75);
    printf("electricity bill is %f",bill);
    }
    else if(units<=250)
    {
    bill=(50*0.5)+(100*0.75)+((units-150)*1.20);
    printf("electricity bill is %f",bill);
    }
    else if(units>250)
    {
    bill=(50*0.5)+(100*0.75)+(100*1.20)+((units-250)*1.50);
    printf("electicity bill is %f",bill);
    }
}
