//
// Created by Administrator on 2021/2/9.
//
/*
 * 统计有多少个词长度超过5
 */

#ifndef CHANNING_10_20_H
#define CHANNING_10_20_H

#include<string>
#include <vector>
#include <algorithm>
using namespace std;

bool longerThan5(string& s){
    return s.size() >= 5;
}

void func(){
    vector<string> v = {"I", "you", "Interel", "jhskdjhgi", "klj", "youou", "lksjdg", "7osijg"};
    int num = count_if(v.begin(), v.end(), longerThan5);
    int num2 = count_if(v.begin(), v.end(), [](string& a){return a.size() >= 5;});
    cout << num << "\t" << num2 << endl;
}

#endif //CHANNING_10_20_H
