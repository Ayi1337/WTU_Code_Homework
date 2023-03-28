//
// Created by Ayi on 3/28/23.
//
//已有函数调用语句c=add（a，b)，请编写add函数，计算两个实数a和b的和，并返回和值。
#include <iostream>
using namespace std;
int add(int a,int b){
    return (a+b);
}
int main(){
    int a,b,c;
    cin>>a>>b;
    c=add(a,b);
    cout<<c<<endl;
}