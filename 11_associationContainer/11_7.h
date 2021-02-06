//
// Created by Administrator on 2021/2/6.
//

#ifndef CHANNING_11_7_H
#define CHANNING_11_7_H
#include <map>
#include <string>
#include <vector>
using namespace std;

void func(){
    map<string, vector<string>> m;
    string family1 = "Xie";
    string family2 = "Wang";
    vector<string> name1 = {"Chen", "Lu", "XiangShun"};
    vector<string> name2 = {"MingZhu", "Fang", "ZhuKai"};
    m[family1] = name1;
    m[family2] = name2;
    for (const auto& family : m){
        cout << "Family Xing: " << family.first << '\n' << "Family member: ";
        for (const auto & name : family.second){
            cout << family.first + " " + name << '\t';
        }
        cout << '\n';
    }
}
#endif //CHANNING_11_7_H
