//
// Created by Administrator on 2021/2/4.
//

#ifndef CHANNING_9_5_H
#define CHANNING_9_5_H
#include <vector>
#include <climits>
using namespace std;

/*
 * 编写函数，接受一对指向vector<int>的迭代器和一个int值。在两个迭代器的指定范围中查找指定的值，如果找到则返回该值，否则返回INT_MIN
 */

int find(vector<int>::iterator iter1, vector<int>::iterator iter2, const int des){
    for (auto iter = iter1; iter != iter2; iter++){
        if (*iter == des)
            return des;
    }
    return INT_MIN;
}

#endif //CHANNING_9_5_H
