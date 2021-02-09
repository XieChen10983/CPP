//
// Created by Administrator on 2021/2/9.
//

/*
 * 编写一个lambda，接受一个int参数并捕获其所在函数的int。返回两者的和。
 */
#ifndef CHANNING_10_15_H
#define CHANNING_10_15_H

void func(){
    int a = 10;
    auto f = [a](int b)->int{return a + b;};
    std::cout << f(2) << std::endl;
}
#endif //CHANNING_10_15_H
