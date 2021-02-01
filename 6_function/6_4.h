//
// Created by Administrator on 2021/2/1.
//

#ifndef CHANNING_6_4_H
#define CHANNING_6_4_H

#include "./6_3.h"
#include<iostream>

/*
 * 编写一个与用户交互的函数，要求用户输入一个数字，输出该数字的阶乘。
 */

using namespace std;

void interaction(){
    int num;
    cout << "Please enter a number: ";
    cin >> num;
    long long res = fact(num);
    cout << "fact(" << num << ") = " << res << endl;
}

#endif //CHANNING_6_4_H
