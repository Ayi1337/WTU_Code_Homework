#include<stdio.h>                             //编译预处理文件，包含标准输入输出函数
int main()                                    //主函数为：
{                                             
    int upper,lower,digit,i,other;            //分别定义名为upper,lower,digit,i,other的五个整型变量
    char ch;                                  //定义名为ch的字符型变量
    upper=lower=digit=other=0;                //将0分别赋给upper,lower,digit,other四个变量
    printf("输入10个字符：");                  //使用输出函数输出“输入10个字符：”
    for(i=1;i<=10;i++)                        //定义变量i为1，当变量i小于等于10时开始执行循环体，完成循环后i加1
    {                                         //循环体开端
        ch=getchar();                         //将输入的字符赋给变量ch
        if(ch>='a'&&ch<='z')                  //如果ch的值为小写，则变量lower+1
            lower++;
        else if(ch>='A'&&ch<='Z')             //否则，ch的值为大写时，则变量upper+1
            upper++;
        else if(ch>='0'&&ch<='9')             //否则，ch的值为数字时，则变量digit+1
            digit++;
        else                                  //否则，变量other+1
            other++;
    }                                         //循环体结束
    printf("小写字母%d个，大写字母%d个，数字%d个，其他字符%d个\n",lower,upper,digit,other);
    //使用输出函数输出“小写字母[lower]个，大写字母[upper]个，数字[digit]个，其他字符[other]个”
    return 0;                                 //主函数返回0
}