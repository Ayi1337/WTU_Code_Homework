//
// Created by Ayi on 3/28/23.
//
//从键盘输入 10个整数并保存到数组，输出 10个整数中的最大值及其下标、最小值及其下标
#include <iostream>
using namespace std;
int main(){
    int a[10];
    int max=0,min=0;
    for (int i = 0; i < 10; ++i) {
        cin>>a[i];
        if (a[i]>max){
            max=i;
        }
        if (a[i]<min){
            min=i;
        }
    }
    cout<<"最大值为"<<a[max]<<"其下标为"<<max<<endl;
    cout<<"最小值为"<<a[min]<<"其下标为"<<min<<endl;
}