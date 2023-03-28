//
// Created by Ayi on 3/27/23.
//
#include<iostream>
using namespace std;
int main(){
    int money;
    double cost;
    cin>>money;
    cost=money;
    if (money<=0)
    {
        cout<<"error"<<endl;
        return 0;
    }
    switch (money/100)
    {
        case 0:
            break;
        case 1:
        case 2:
            cost*=0.95;
            break;
        case 3:
        case 4:
            cost*=0.9;
            break;
        default:
            cost*=0.85;
            break;
    }
    cout<<cost<<endl;
}