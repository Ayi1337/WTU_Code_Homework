//if方法实现
#include<stdio.h>
int main(void)
{
    float money,total_money,x;
    int year;
    printf("请输入您的本金及需要存的年份\n");
    scanf("%f %d",&money,&year);
    if (year==1||year==2||year==3||year==5||year==8)
    {
        if (year==1)
        {
            x=0.0032;
        }
        if (year==2)
        {
            x=0.0041;
        }
        if (year==3)
        {
            x=0.005;
        }
        if (year==5)
        {
            x=0.0055;
        }
        if (year==8)
        {
            x=0.0065;
        }
    }else{
        printf("您输入的年份不合法");
        return 0;
    }
    total_money=money+money*x*12*year;
    printf("将%.2f元存款%d年的后的总钱数为%.2f",money,year,total_money);
}