#include<stdio.h>
void main()
{
    int X,Y,a,b,i;
    printf("enter the value of X,Y,a,b");
    scanf("%d%d%d%d",&X,&Y,&a,&b);
    for(i=X;i<=Y;i++)
    {
        if(i%a==0&&i%b==0)
        {
            printf("\n%d",i);
        }
    }
}