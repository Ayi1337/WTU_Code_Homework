#include<stdio.h>                           //编译预处理文件，包含标准输入输出函数
int main()                                  //主函数为：
{
    int i,flag,number;                      //分别定义名为i,flag,number的三个整型变量
    scanf("%d",&number);                    //使用输入函数输入一个数，并赋给变量number
    flag=1;                                 //将1赋给变量flag
    for(i=2;i<=number-1&&flag;i++)          //定义变量i为2，当变量i小于等于number-1或flag时开始执行循环体，完成循环后i加1
                                            //循环体开端
        if(number%i==0)                     //如果number取余i等于0时将执行
            flag=0;                         //将0赋给变量flag
                                            //循环体结尾
    if(flag)                                //如果flag等于1时将执行
        printf("%d是素数\n",number);         //使用输出函数输出“[number]是素数”
    else                                    //否则
        printf("%d不是素数",number);         //使用输出函数输出“[number]不是素数”
    return 0;                               //主函数返回0
}