#include<stdio.h>                               //编译预处理文件，包含标准输入输出函数
int main()                                      //主函数为：
{
    int num,n;                                  //分别定义名为num,n的两个整型变量
    float score,total=0;                        //定义名为score，total的两个单精度浮点型变量，并将0赋给变量total
    num=0;n=0;                                  //将0分别赋给变量num,n
    while(1)                                    //
    {                                           //循环体开端
        printf("请输入分数#%d(0~100):",n+1);     //使用输出函数输出“请输入分数#[n+1](0~100)”
        scanf("%f",&score);                     //使用输入函数输入一个数，并赋给变量score
        if(score<0)                             //如果变量score小于0，则中断循环
            break;
        if(score<60)                            //当变量score小于60时，变量num+1
            num++;
        total=total+score;                      //将total+score的值赋给total
        n++;                                    //n+1
    }                                           //循环体结束
    printf("平均分数是:%.2f.\n",total/n);       //使用输出函数输出“平均分数是[total/n]”
    printf("不及格的有:%d.\n",num);             //使用输出函数输出“不及格的有[num]”
    return 0;                                   //主函数返回0
}