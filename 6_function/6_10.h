//
// Created by Administrator on 2021/2/1.
//

#ifndef CHANNING_6_10_H
#define CHANNING_6_10_H

/*
 * 6.10 编写一个函数，使用指针形参交换两个整数的值
 */

void mySwap(int* pointer1, int* pointer2){
    int temp;
    temp = *pointer1;
    *pointer1 = *pointer2;
    *pointer2 = temp;
}

#endif //CHANNING_6_10_H
