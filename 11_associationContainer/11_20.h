//
// Created by Administrator on 2021/2/6.
//

#ifndef CHANNING_11_20_H
#define CHANNING_11_20_H
#include <map>
#include <string>
using namespace std;

void func(){
    map<string, size_t> m;
    string word;
    while (cin >> word){
        if (word == "q")
            break;
        ++(m.insert(make_pair(word, 0))).first->second;
    }
    for (const auto& ele : m){
        cout << ele.first << ": " << ele.second << endl;
    }
}

#endif //CHANNING_11_20_H
