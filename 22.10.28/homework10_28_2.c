//无优化方案
#include<stdio.h>
int main(void)
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a>b)
    {
        if(c>a)
        {
            printf("%d%d%d",c,a,b);
        }else if (c>b)
            {
                printf("%d%d%d",a,c,b);
            }else
                {
                    printf("%d%d%d",a,b,c);
                }
    }else if (a>c)
            {
                printf("%d%d%d",b,a,c);
            }
            else if (b>c)
                {
                    printf("%d%d%d",b,c,a);
                }else
                    {
                        printf("%d%d%d",c,b,a);
                    }
    return 0;
}