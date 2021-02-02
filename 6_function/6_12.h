//
// Created by Administrator on 2021/2/1.
//

#ifndef CHANNING_6_12_H
#define CHANNING_6_12_H

/*
 * 6.12 使用引用来进行两个数的交换
 */

void mySwap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}
#endif //CHANNING_6_12_H
