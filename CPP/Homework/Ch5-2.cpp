//
// Created by Ayi on 3/28/23.
//
//有一个数组，内放10个学生的英语成绩，写一个函数，求出平均分，并且打印出高于平均分的英语成绩。
#include <iostream>
using namespace std;
void ave(float score_ave[]){
    float ave=0;
    for (int i = 0; i < 10; ++i) {
        ave+=score_ave[i];
    }
    ave/=10.0;
    cout<<"平均分为："<<ave<<"\n"<<"高于平均分的分数有："<<endl;
    for (int i = 0; i < 10; ++i) {
        if (score_ave[i] > ave)
            cout << score_ave[i] << "\t";
    }
}
int main(){
    float score[10]={8,8,7,5,4,1,2,3,6,4};
    ave(score);
}