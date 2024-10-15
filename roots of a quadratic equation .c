#include<math.h>
main()
{
int a,b,c;
float r1,r2,delta;
printf("enter the values of a,b,c");
scanf("%d%d%d",&a,&b,&c);
delta=b*b-(4*a*c);
r1=((-b)+(sqrt(delta)))/(2*a);
r2=((-b)-(sqrt(delta)))/(2*a);
if(delta>0)
{
   printf("roots are real and distinct");
   printf("\n%f%f",r1,r2);
}
else if(delta=0)
{
   printf("roots are real and equal");
   printf("\n%f%f",r1,r2);
}
else
{
   printf("roots are imaginary");
}
}