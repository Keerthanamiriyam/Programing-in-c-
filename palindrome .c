#include<stdio.h>
int main()
{
    int num,rem,rev=0,original;
    printf("enter a number");
    scanf("%d",&num);
    original=num;
    for(;num!=0;)
    {
        rem=num%10;
        rev=(rev*10)+rem;
        num=num/10;
    }
    if(original==rev)
        printf("It is a palindrome");
    else
        printf("It is not a palindrome");
}