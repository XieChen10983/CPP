//
// Created by Administrator on 2021/2/3.
//

#ifndef CHANNING_6_54_H
#define CHANNING_6_54_H
#include <vector>

int func(int a, int b);

typedef decltype(func) *pFunc;
vector<pFunc> v;

#endif //CHANNING_6_54_H
