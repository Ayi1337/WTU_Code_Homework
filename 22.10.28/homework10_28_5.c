#include<stdio.h>
int main(void)
{
    float total_salary,ex_salary,sale_money;
    int base_salary=1000;
    printf("请输入销售额：");
    scanf("%f",&sale_money);
    if (sale_money<10000)
    {
        ex_salary=0;
    }else if (sale_money<20000)
    {
        ex_salary=(sale_money-10000)*0.05;
    }else if (sale_money>=20000&&sale_money<50000)
    {
        ex_salary=(sale_money-20000)*0.06;
    }else if (sale_money>=50000&&sale_money<100000)
    {
        ex_salary=(sale_money-50000)*0.07;
    }else if (sale_money>100000)
    {
        ex_salary=(sale_money-100000)*0.08;
    }
    total_salary=base_salary+ex_salary;
    printf("工资为：%.2f",total_salary);
}