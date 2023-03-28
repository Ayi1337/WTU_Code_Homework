//
// Created by Ayi on 3/27/23.
//
// 输入圆的半径r和一个整型数k，当k=1时，计算圆的面积；当k=2时，计算圆的周长；当k=3时，既要求圆的周长也要求圆的面积
#include <iostream>
using namespace std;
int main(){
    const float pi=3.14;
    float r;
    int k;
    cin>>r>>k;
    switch (k) {
        case 1:
            cout<<pi*(r*r)<<endl;
            break;
        case 2:
            cout<<2*pi*r<<endl;
            break;
        case 3:
            cout<<pi*(r*r)<<endl;
            cout<<2*pi*r<<endl;
            break;
    }
}