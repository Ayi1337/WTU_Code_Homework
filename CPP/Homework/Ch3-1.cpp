//
// Created by Ayi on 3/27/23.
//
//输入一个华氏温度，要求输出摄氏温度。取两位小数。
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    float C,F;
    cin>>F;
    C=((F-32)*5.0/9.0);
    cout<<fixed<<setprecision(2)<<C<<endl;
    //cout<<C<<endl;
}