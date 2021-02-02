//
// Created by Administrator on 2021/2/2.
//

/*
 * 编写一个函数，其参数是initializer_list<int>类型的对象，函数的功能是计算列表中所有元素的和
 */

#ifndef CHANNING_6_27_H
#define CHANNING_6_27_H

//#include <iostream>
//#include <initializer_list>
//
//using namespace std;
//
//void calSum(initializer_list<int> li)
//{
//    auto s = 0;
//    for (auto beg = li.begin(); beg != li.end(); ++beg)
//        s = s + *beg;
//    cout << s << endl;
//}

#include <initializer_list>

int calSum(initializer_list<int> li){
    int sum = 0;
    for (int beg : li)
        sum += beg;
    return sum;
}

#endif //CHANNING_6_27_H
