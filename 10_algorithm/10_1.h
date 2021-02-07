//
// Created by Administrator on 2021/2/7.
//
/*
 * 编写程序读取int序列存入vector中，打印有多少个元素的值等于给定值
 */

#ifndef CHANNING_10_1_H
#define CHANNING_10_1_H
#include <vector>
#include <algorithm>
using namespace std;

void func(){
    vector<int> v;
    int a[]  = {2, 3, 5, 6, 7, 9, 7, 5, 5};
    for (int & i : a)
        v.push_back(i);
    int num = count(v.begin(), v.end(), 5);
    cout << 5 << "nums = " << num << endl;
}

#endif //CHANNING_10_1_H
