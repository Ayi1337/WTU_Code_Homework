#include<stdio.h>
int main()
{
    int num,num_i;
    scanf("%d",&num);
    for (num_i = 1; num_i <= 5; num_i++)
    {
        printf("%d",num%10);
        num/=10;
    }
}