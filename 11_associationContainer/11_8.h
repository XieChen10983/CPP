//
// Created by Administrator on 2021/2/6.
//
/*
 * 编写一个程序，在一个vector而不是一个set中保存不重复的单词
 */

#ifndef CHANNING_11_8_H
#define CHANNING_11_8_H
#include<vector>
#include<string>
using namespace std;

void func(){
    vector<string> v;
    string word;
    bool find;
    while (cin >> word){
        if (word == "q")
            break;
        find = false;
        for (const auto& w : v){
            if (w == word){
                find = true;
                continue;
            }
        }
        if (!find)
            v.push_back(word);
    }
    for (const auto& w : v){
        cout << w << '\t';
    }
}

#endif //CHANNING_11_8_H
