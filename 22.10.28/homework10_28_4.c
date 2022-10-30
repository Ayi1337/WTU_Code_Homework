#include<stdio.h>
int main(void)
{
    int y,m,d,total_d;
    scanf("%d %d %d",&y,&m,&d);
    switch (m-1)
    {
    case 0:
        total_d=d;
        break;
    
    case 1:
        total_d=d+31;
        break;

    case 2:
        total_d=d+31+28;
        break;

    case 3:
        total_d=d+31+28+31;
        break;

    case 4:
        total_d=d+31+28+31+30;
        break;

    case 5:
        total_d=d+31+28+31+30+31;
        break;

    case 6:
        total_d=d+31+28+31+30+31+30;
        break;

    case 7:
        total_d=d+31+28+31+30+31+30+31;
        break;

    case 8:
        total_d=d+31+28+31+30+31+30+31+31;
        break;

    case 9:
        total_d=d+31+28+31+30+31+30+31+31+30;
        break;

    case 10:
        total_d=d+31+28+31+30+31+30+31+31+30+31;
        break;

    case 11:
        total_d=d+31+28+31+30+31+30+31+31+30+31+30;
        break;

    default:
        printf("月份都能输错？");
        return 0;
    }
    if (((y%4==0&&y%100!=0)||(y%400==0))&&m>2)
    {
        total_d++;
    }
    printf("这一天是今年的第%d天",total_d);
    return 0;
}