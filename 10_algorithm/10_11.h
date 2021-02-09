//
// Created by Administrator on 2021/2/9.
//

#ifndef CHANNING_10_11_H
#define CHANNING_10_11_H
/*
 * 编写程序，使用stable_sort和isShorter将vector排序
 */

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

bool isShorter(const string& s1, const string& s2){
    return s1.size() <= s2.size();
}

void func(){
    vector<string> v = {"hi", "you", "love", "how", "you", "I", "how"};
    printVector(v);
    stable_sort(v.begin(), v.end(), isShorter);
    printVector(v);
}

#endif //CHANNING_10_11_H
