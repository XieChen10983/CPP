//
// Created by Administrator on 2021/2/4.
//

#ifndef CHANNING_9_16_H
#define CHANNING_9_16_H

// 编写程序，判断vector<int>和list<int>中的元素
#include <vector>
#include <list>
using namespace std;

bool isEqualVectorInt(const vector<int>& v1, const list<int>& l2){
    if (v1.size() != l2.size())
        return false;
    auto vIter = v1.cbegin();
    auto lIter = l2.cbegin();
    while (vIter != v1.cend()){
        if (*vIter != *lIter)
            return false;
        vIter++;
        lIter++;
    }
    return true;
}

#endif //CHANNING_9_16_H
