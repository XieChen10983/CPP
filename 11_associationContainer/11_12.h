//
// Created by Administrator on 2021/2/6.
//
/*
 * 编写程序，读入string和int序列，将每个string和int存入一个pair中，pair保存在一个vector中
 */

#ifndef CHANNING_11_12_H
#define CHANNING_11_12_H
#include<utility>
#include <vector>
#include <string>
using namespace std;

void func(){
    vector<pair<string, int>> v;
    vector<string> stringV = {"I", "love", "you"};
    vector<int> intV = {0, 2, 1};

    v.reserve(3);
    for (int i = 0; i < 3; i++){
        v.emplace_back(stringV[i], intV[i]);
    }

    for (const auto& p : v){
        cout << p.first << '\t' << p.second << endl;
    }
}

#endif //CHANNING_11_12_H
