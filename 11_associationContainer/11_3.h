//
// Created by Administrator on 2021/2/6.
//
/*
 * 编写自己的单词计数程序
 */

#ifndef CHANNING_11_3_H
#define CHANNING_11_3_H
#include <string>
#include <map>
#include <unordered_map>
using namespace std;

void cinAndCountWords(){
    unordered_map<string, size_t> m;
    string word;
    while (cin >> word){
        if (word == "q")
            break;
        ++m[word];
    }

    for (const auto& w : m){
        cout << w.first << " occurs " << w.second << " times;" << endl;
    }
}

#endif //CHANNING_11_3_H
