//
// Created by Administrator on 2021/2/2.
//

#ifndef CHANNING_6_22_H
#define CHANNING_6_22_H

/*
 * 编写一个函数，令其交换两个int指针
 */

void swapPointer(int*& p1, int*& p2){
    int* temp = p1;
    p1 = p2;
    p2 = temp;
}

#endif //CHANNING_6_22_H
