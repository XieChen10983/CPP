//
// Created by Administrator on 2021/2/7.
//

#ifndef CHANNING_10_2_H
#define CHANNING_10_2_H
#include <list>
#include <string>
#include <algorithm>
using namespace std;

void func(){
    list<string> l;
    string a[] = {"I love you", "I love you", "you love me", "I love you"};
    for (string & s : a)
        l.push_back(s);
    int num = count(l.begin(), l.end(), "you love ");
    cout << num;
}
#endif //CHANNING_10_2_H
