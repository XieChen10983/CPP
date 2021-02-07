//
// Created by Administrator on 2021/2/7.
//
/*
 * 编写程序，使用fill_n将一个序列中的int值都设置为0
 */

#ifndef CHANNING_10_6_H
#define CHANNING_10_6_H
#include<algorithm>
#include <vector>
using namespace std;

template <typename T>
void printVector(const vector<T>& v){
    for (const T& ele : v)
        cout << ele << '\t';
    cout << endl;
}

void func(){
    vector<int> v = {0, 5, 2, 7, 9, 3, 6, 8, 1, 4};
    printVector(v);
    fill_n(back_inserter(v), v.size(), 0);
    printVector(v);
}

#endif //CHANNING_10_6_H
