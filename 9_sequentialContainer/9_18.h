//
// Created by Administrator on 2021/2/4.
// 编写程序，从标准输入读取string序列，存入deque中。然后编写一个循环，用迭代器打印deque中的元素
//

#ifndef CHANNING_9_18_H
#define CHANNING_9_18_H
#include <iostream>
#include <string>
#include <vector>
#include <deque>
using namespace std;

void InAndOut(){
    deque<string> data;
    string line;
    while ((cin >> line) && (line != "q")){
        data.push_back(line);
    }
//    for (deque<string>::const_iterator iter = data.cbegin(); iter != data.cend(); iter++)
    for (const auto & iter : data)
        cout << iter << endl;
}

#endif //CHANNING_9_18_H
