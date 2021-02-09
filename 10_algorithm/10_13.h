//
// Created by Administrator on 2021/2/9.
//
/*
 * 打印出长度大于等于5的元素
 */

#ifndef CHANNING_10_13_H
#define CHANNING_10_13_H
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

template <typename T>
void printVector(const vector<T>& v){
    for (const auto& ele : v){
        cout << ele << "\t";
    }
    cout << endl;
}

bool longerThan5(string& s){
    return s.size() >= 5;
}

void func(){
    vector<string> v = {"I", "you", "function", "interesting", "how", "plane", "love"};
    auto iter = partition(v.begin(), v.end(), longerThan5);
    for (auto i = v.begin(); i != iter; i++){
        cout << *i << "\t";
    }
    cout << endl;
    for (auto i = iter; i!= v.end(); i++){
        cout << *i << "\t";
    }
    cout << endl;
}

#endif //CHANNING_10_13_H
