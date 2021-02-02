//
// Created by Administrator on 2021/2/2.
//

#ifndef CHANNING_6_17_H
#define CHANNING_6_17_H
/*
 * 编写一个函数，判断string对象中是否含有大写字母。
 * 编写另一个函数，把string对象全部改写成小写形式。
 * 说明这两个函数中使用的形参类型是否相同。为什么？
 * 不相同，需不需要修改的区别
 */
#include <string>
#include <typeinfo>
using namespace std;

bool hasUpper(const string& s){
    for (char i : s){
        if (((int)i >= 65) && ((int)i <= 90)){

            return true;
        }
    }
    return false;
}

void lower(string& s){
//    cout << int('a') << '\t' << int('z') << endl;
    for (char & i : s){
        if (((int)i >= 65) && ((int)i <= 90)){
            i = char(i + 32);
        }
    }
}

#endif //CHANNING_6_17_H
