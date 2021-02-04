//
// Created by Administrator on 2021/2/4.
//

#ifndef CHANNING_9_13_H
#define CHANNING_9_13_H

// 如何从一个list<int>初始化一个vector<double>?从一个vector<int>又该如何创建？
// 答：可以使用迭代器参数来进行初始化，其不要求容器类型相同，也不要求容器的元素类型相同，需原容器和目标容器的元素类型可以转换

#include <list>
#include <vector>
using namespace std;

vector<int> v1 = {4, 8, 9};
list<int> l1 = {1, 3, 5};
vector<double> v2(l1.begin(), l1.end());

#endif //CHANNING_9_13_H
