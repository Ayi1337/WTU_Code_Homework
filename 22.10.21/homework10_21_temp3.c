#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    printf("%d",num%10);
    num/=10;
    printf("%d",num%10);
    num/=10;
    printf("%d",num%10);
    num/=10;
    printf("%d",num%10);
    num/=10;
    printf("%d",num%10);
}