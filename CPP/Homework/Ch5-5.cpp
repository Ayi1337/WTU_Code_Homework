//
// Created by Ayi on 3/28/23.
//
//函数sum （n）是利用递归计算 1+2+3…+n 的结果，请完成 int sum (int n）函数的编写。
#include <iostream>
using namespace std;
int sum(int x){
    int sum=0;
    for (int i = 1; i <= x; ++i) {
        sum+=i;
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    n=sum(n);
    cout<<n;
}