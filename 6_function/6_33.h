//
// Created by Administrator on 2021/2/3.
//

#ifndef CHANNING_6_33_H
#define CHANNING_6_33_H

/*
 * 编写一个递归函数，输出vector对象的内容
 */
#include <vector>

template <typename T>
void printVector(const vector<T>& v, int begin = 0){
    static int length = v.size();
    if (begin == length - 1)
        cout << v[begin] << endl;
    else{
        cout << v[begin++] << endl;
        printVector<T>(v, begin);
    }
}

#endif //CHANNING_6_33_H
