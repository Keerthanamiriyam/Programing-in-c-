#include<stdio.h>
void main()
{
   int n,i,c=0;
   printf("enter n values");
   scanf("%d",&n);
   for(i=2;i<=n;i++)
   {
   if(n%i==0)
   c++;
   }
   
   if(c==1)
   {
   printf("it is prime");
   }
   else 
   {
   printf("it is not prime");
   }
   }