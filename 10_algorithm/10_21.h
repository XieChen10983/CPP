//
// Created by Administrator on 2021/2/9.
//
/*
 * 编写一个lambda，捕获一个局部int变量，并递减变量值，直至它变为0.一旦变为0，再调用不应再递减变量。lambda应该返回一个bool值，指出
 */

#ifndef CHANNING_10_21_H
#define CHANNING_10_21_H

void func(){
    int jubu = 10;
    auto f = [&jubu]()->bool{return (--jubu) != 0;};
    while (jubu){
        f();
        std::cout << "hi" << std::endl;
    }
}

#endif //CHANNING_10_21_H
