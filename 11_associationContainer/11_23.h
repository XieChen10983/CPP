//
// Created by Administrator on 2021/2/6.
//

#ifndef CHANNING_11_23_H
#define CHANNING_11_23_H
#include <map>
//#include <multimap>
#include <string>
#include <vector>
using namespace std;

void func(){
//    map<string, vector<string>> m;
    multimap<string, string> m2;
    string family1 = "Xie";
    string family2 = "Wang";
    vector<string> name1 = {"Chen", "Lu", "XiangShun"};
    vector<string> name2 = {"MingZhu", "Fang", "ZhuKai"};

    for (const auto& name : name1) {
//        cout << name << endl;
        m2.insert(make_pair(family1, name));
    }
//    cout << m2.size() << endl;
    for (const auto& name : name2)
        m2.insert(make_pair(family2, name));
//    m[family1] = name1;
//    m[family2] = name2;
    for (const auto& family : m2){
        cout << family.first << ' ' << family.second << endl;
//        for (const auto & name : family.second){
//            cout << family.first + " " + name << '\t';
//        }
//        cout << '\n';
    }
}
#endif //CHANNING_11_23_H
