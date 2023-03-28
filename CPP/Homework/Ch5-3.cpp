//
// Created by Ayi on 3/28/23.
//
//3. 編写一个函数计算任一整数的各位数字之和，完成 int count （int x） 函数的编写，其中x代表一个任意整数
#include <iostream>
using namespace std;
int count(int x){
    int sum=0;
    do {
        sum+=x%10;
        x/=10;
    } while (x>10);
    return sum;
}
int main(){
    int x;
    cin>>x;
    x=count(x);
    cout<<x;
}