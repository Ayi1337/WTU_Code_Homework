//
// Created by Ayi on 3/28/23.
//
//已知一个整型数组{3,7,8,9,10,4,5}，求该数组中所有值为偶数的元素的和。
#include <iostream>
using namespace std;
int main(){
    int a[]={3,7,8,9,10,4,5};
    int sum=0;
    for (int i = 0; i <= 7; ++i) {
        if ((a[i]%2)==0){
            sum+=a[i];
        }
    }
    cout<<sum<<endl;
}