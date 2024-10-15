void main()
{
    int a,b,c,d;
    printf("enter the values of a b c d");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b)
    {
        if(a>c&&a>d)
           printf("a is biggest");
        else
            {
            if(c>d)
              printf("cis biggest ");
            else
              printf("d is biggest");
            }
            }
        else
        {
            if(b>c&&b>d)
               {
                printf("b is biggest");
               }
            else
                  {
                      if(c>d)
                        printf("c is biggest");    
                      else
                        printf("d is biggest");
                }
            }
        }