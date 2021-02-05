//
// Created by Administrator on 2021/2/5.
//

// 若事先知道最少要读取100个字符，应该用reserve提前预留好100个capacity的空间

#ifndef CHANNING_9_42_H
#define CHANNING_9_42_H
#include <string>
#include <iostream>
using namespace std;

void cinCharToString(){
    string s;
    s.reserve(100);
    char c;
    while (cin >> c && c != 'q'){
        s.push_back(c);
    }
    cout << s << endl;
}

#endif //CHANNING_9_42_H
