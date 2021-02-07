//
// Created by Administrator on 2021/2/5.
//

#ifndef CHANNING_9_43_H
#define CHANNING_9_43_H
#include <string>
using namespace std;

void replace_(string s, const string& oldVal, const string& newVal){
    if (s.empty())
        return;
    auto left = s.begin(), right = s.end();
    while ((left = s.find(oldVal, left) != -1)){
//        s.erase(left, oldVal);
//        s.insert(left, newVal.begin(), newVal.end());
        s.replace(left, oldVal.size(), newVal)
        left += newVal.size();
        right += newVal.size() - oldVal.size();
    }
}

#endif //CHANNING_9_43_H
