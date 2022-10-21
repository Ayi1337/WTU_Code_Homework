#include<stdio.h>
int main(void)
{
    int num;
    int num_1,num_2,num_3,num_4,num_5;
    scanf("%d",&num);
    num_1=num/10000;
    num_2=num/1000-num_1*10;
    num_3=num/100-num_1*100-num_2*10;
    num_4=num%100/10;
    num_5=num%10;
    printf("%d%d%d%d%d",num_5,num_4,num_3,num_2,num_1);
}