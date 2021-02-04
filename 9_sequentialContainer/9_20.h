//
// Created by Administrator on 2021/2/4.
// 编写程序，从一个list<int>拷贝元素到两个deque中。偶数一个，奇数一个
//

#ifndef CHANNING_9_20_H
#define CHANNING_9_20_H
#include <deque>
#include <list>
#include <iostream>
using namespace std;


void test() {
    list<int> li = {5, 7, 6, 9, 8, 2, 1, 0, 3, 4};
    deque<int> dan, shuang;
//
//for (list<int>::iterator iter = li.begin(); iter != li.end(); iter++)
    for (auto & ele : li){
        if (ele & 1)
            dan.push_back(ele);
        else
            shuang.push_back(ele);
    }

    cout << "single" << endl;
    for (const auto& ele : dan)
        cout << ele << endl;
    cout << "not single" << endl;
    for (const auto& ele : shuang)
        cout << ele << endl;
}

#endif //CHANNING_9_20_H
