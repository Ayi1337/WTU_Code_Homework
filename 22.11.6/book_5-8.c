#include<stdio.h>                           //编译预处理文件，包含标准输入输出函数
int main()                                  //主函数为：
{
    int number,sum,i;                       //分别定义名为number,sum,i的三个整型变量
    printf("请输入一个正整数：");             //使用输出函数输出“请输入一个正整数：”
    scanf("%d",&number);                    //使用输入函数输入一个数，并赋给变量number
    sum=0;                                  //将0赋给变量sum
    for ( i = 1; i <= number-1; i++)        //定义变量i等于1，当变量i小于等于变量number-1时开始执行循环体，完成循环后i加1
                                            //循环体开端
        if(number%1==0)                     //如果number取余1等于0将执行
            sum=sum+i;                      //将sum+i的值赋给sum
                                            //循环体结尾
    if(number==sum)                         //如果number与sum的值相等则执行
        printf("%d是完数\n",number);        //使用输出函数输出“[变量number]是完数”
    else                                    //否则
        printf("%d不是完数\n",number);       //使用输出函数输出“[变量number]不是完数”
    return 0;                               //主函数返回0
}