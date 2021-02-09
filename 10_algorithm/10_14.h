//
// Created by Administrator on 2021/2/9.
//
/*
 * 编写一个lambda，接受两个int，返回他们的和
 */

#ifndef CHANNING_10_14_H
#define CHANNING_10_14_H

auto f = [](int a, int b)->int{return a + b;};
void func(){
    std::cout << f(5, 6) << std::endl;
}

#endif //CHANNING_10_14_H
