//
// Created by Administrator on 2021/2/5.
//
/*
 * 编写程序，探究vector是如何增长的？
 * 从初始开始，每次溢出翻一番
 */

#ifndef CHANNING_9_38_H
#define CHANNING_9_38_H
#include <vector>
using namespace std;

void grow(int initial_capacity = 3, int num = 12){
    vector<int> v;
    v.reserve(initial_capacity);
    for (int i = 0; i < num; i++){
        v.push_back(i);
        cout << "size = " << v.size() << '\t' << "capacity = " << v.capacity() << endl;
    }
}

#endif //CHANNING_9_38_H
