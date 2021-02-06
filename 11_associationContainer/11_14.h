//
// Created by Administrator on 2021/2/6.
//

#ifndef CHANNING_11_14_H
#define CHANNING_11_14_H
#include <map>
#include <string>
#include <vector>
#include <utility>
using namespace std;

void func(){
    map<string, vector<pair<string, string>>> m;
    string family1 = "Xie";
    string family2 = "Wang";
    vector<pair<string, string>> data1 = {make_pair("Chen", "0101"), make_pair("Lu", "0102"), make_pair("XiangShun", "0103")};
    vector<pair<string, string>> data2 = {make_pair("MingZhu", "0201"), make_pair("Fang", "0202"), make_pair("ZhuKai", "0203")};
//    vector<string> name2 = {"MingZhu", "Fang", "ZhuKai"};
    m[family1] = data1;
    m[family2] = data2;
    for (const auto& family : m){
        cout << "Family Xing: " << family.first << '\n' << "Family member: ";
        for (const auto & data : family.second){
            cout << family.first + " " + data.first << ": " << data.second << "\t";
        }
        cout << '\n';
    }
}

#endif //CHANNING_11_14_H
