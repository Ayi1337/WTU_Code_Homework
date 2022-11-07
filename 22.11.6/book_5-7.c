#include<stdio.h>                               //编译预处理文件，包含标准输入输出函数
int main()                                      //主函数为：
{                                               
    int number,a,b,c;                           //分别定义名为number,a,b,c的四个整型变量
    for(number=100;number<=999;number++)        //定义变量number为100，当变量number小于等于100时开始执行循环体，完成循环后number加1
    {                                           //循环体开端
        a=number/100;                           //将number除100的值赋给变量a
        b=number%100/10;                        //将number取余100后除10的值赋给变量b
        c=number%10;                            //将number取余10后的值赋给变量c
        if(number==a*a*a+b*b*b+c*c*c)           //如果number等于a*a*a+b*b*b+c*c*c的值将执行
            printf("%5d",number);               //使用输出函数输出number的值
    }                                           //循环体结尾
    return 0;                                   //主函数返回0
}