//
// Created by Administrator on 2021/2/7.
//
/*
 * 用accumulate求一个vector<int> 中的元素之和
 */

#ifndef CHANNING_10_3_H
#define CHANNING_10_3_H
#include <numeric>
#include <vector>
using namespace std;

void func(){
    vector<int> v = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<double> v2 = {0.1, 0.1, 0.1, 0.1};
    double sum = accumulate(v2.begin(), v2.end(), 0.);
    cout << "sum = " << sum << endl;
}

#endif //CHANNING_10_3_H
