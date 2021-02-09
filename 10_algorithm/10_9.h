//
// Created by Administrator on 2021/2/7.
//

#ifndef CHANNING_10_9_H
#define CHANNING_10_9_H
#include <string>
#include<vector>
#include <algorithm>
using namespace std;

template <typename T>
void printVector(const vector<T>& v){
    for (const T& ele : v)
        cout << ele << '\t';
    cout << endl;
}

void func(){
    vector<string> v = {"the", "quick", "fox", "red", "jumps", "over", "the", "slow", "red", "turtle"};
    printVector(v);
    sort(v.begin(), v.end());
    printVector(v);
    auto iter = unique(v.begin(), v.end());
    v.erase(iter, v.end());
    printVector(v);
}


#endif //CHANNING_10_9_H
