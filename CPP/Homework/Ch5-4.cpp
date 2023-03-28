//
// Created by Ayi on 3/28/23.
//
//已有变量定义语句double a=5.0，int n=5 和用以求a的n次方的函数调用语句mypow（a，n），请编写 double mypow (double x,int y）函数。
#include <iostream>
using namespace std;
double mypow(double x,int y){
    for (int i = 1; i < y; ++i) {
        x*=y;
    }
    return x;
}
int main(){
    double a=5.0;
    int n=5;
    double sum=0;
    sum=mypow(a,n);
    cout<<sum;
}