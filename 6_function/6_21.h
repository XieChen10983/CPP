//
// Created by Administrator on 2021/2/2.
//

#ifndef CHANNING_6_21_H
#define CHANNING_6_21_H

/*
 * 编写一个函数，令其接受两个参数：一个是int型的数，另外一个是int指针。函数比较int的值和指针所指的值，返回较大的那个。
 */

int compare(int a, const int* const p){
    return a >= *p ? a : *p;
}

#endif //CHANNING_6_21_H
