#include<stdio.h>
int main(void)
{
    float money,total_money,x;
    int year;
    printf("请输入您的本金及需要存的年份\n");
    scanf("%f %d",&money,&year);
    switch (year)
    {
    case 1:
        x=0.0032;
        break;

    case 2:
        x=0.0041;
        break;

    case 3:
        x=0.005;
        break;

    case 5:
        x=0.0055;
        break;

    case 8:
        x=0.0065;
        break;
    
    default:
        printf("您输入的年份不合法");
        return 0;
    }
    total_money=money+money*x*12*year;
    printf("将%.2f元存款%d年的后的总钱数为%.2f",money,year,total_money);
}