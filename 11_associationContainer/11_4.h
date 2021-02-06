//
// Created by Administrator on 2021/2/6.
//

#ifndef CHANNING_11_4_H
#define CHANNING_11_4_H
#include <string>
#include <unordered_map>
using namespace std;

bool isCharacter(const char& c){
    return (('A' <= c) && (c <= 'Z')) || (('a' <= c) && (c <= 'z'));
}

void preProcess(string& str){
    while (!isCharacter(str[str.size() - 1]))
        str.pop_back();
    for (auto& c : str)
        c = ('A' <= c) && (c <= 'Z') ? c + 32 : c;
}

void cinAndCountWords(){
    unordered_map<string, size_t> m;
    string word;
    while (cin >> word){
        if (word == "q")
            break;
        preProcess(word);
        ++m[word];
    }

    for (const auto& w : m){
        cout << w.first << " occurs " << w.second << " times;" << endl;
    }
}

#endif //CHANNING_11_4_H
