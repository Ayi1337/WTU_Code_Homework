#include<stdio.h>                                   //编译预处理文件，包含标准输入输出函数
int main()                                          //主函数为：
{
    int digit,letter,other;                         //分别定义名为digit,letter,other的三个整型变量
    char ch;                                        //定义名为ch的字符型变量
    digit=letter=other=0;                           //将0分别赋给digit，letter,other三个变量
    printf("请输入一串字符：");                      //使用输出函数输出“请输入一串字符：”
    while((ch=getchar())!='\n')                     //当ch读取的值不等于回车时执行
        if((ch>='0')&&(ch<='9'))                    //如果ch的值为数字时，则变量digit+1
            digit++;
        else if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))     //否则，ch的值为字母时，则变量letter+1
            letter++;
        else                                                //否则，变量other+1
            other++;
    printf("数字%d个,字母%d个,其他%d个\n",digit,letter,other);
    //使用输出函数输出“数字[digit]个,字母[letter]个,其他[other]个”
    return 0;
}