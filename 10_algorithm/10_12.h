//
// Created by Administrator on 2021/2/9.
//

#ifndef CHANNING_10_12_H
#define CHANNING_10_12_H
#include <utility>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

//struct SalesMan{
//    string name;
//    int age;
//    SalesMan() : name("jack"), age(0) {}
//    SalesMan(string s, int a) {
//        this->name = s;
//        this->age = a;
//    }
//};

struct SalesMan {
    int val;
//    SalesMan *left;
    string left;
    SalesMan() : val(0), left("") {}
    SalesMan(int x) : val(x), left("") {}
    SalesMan(int x, string left) : val(x), left(left) {}
};

template <typename T>
void printVector(const vector<T>& v){
    for (const auto& ele : v){
        cout << ele.left << ": " << ele.val << "\t";
    }
    cout << endl;
}

bool ageUp(SalesMan& s1, SalesMan& s2){
    return s1.val <= s2.val;
}

void func(){
    vector<SalesMan> v;
    v.emplace_back(17, "Jack");
    v.emplace_back(24, "Channing");
    v.emplace_back(23, "XieChen");
    v.emplace_back(36, "Hui");
    v.emplace_back(9, "Dang");
    printVector(v);
    sort(v.cbegin(), v.cend(), ageUp);
    printVector(v);
}

#endif //CHANNING_10_12_H
