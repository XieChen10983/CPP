//
// Created by Administrator on 2021/2/1.
//

/*
 * 编写一个函数，当其第一次被调用的时候返回0，以后每次被调用返回值加1.
 */

#ifndef CHANNING_6_7_H
#define CHANNING_6_7_H

int countUseTime(){
    static int num = 0;  // 静态变量num，存在于程序执行的整段时期。因此num不断加一
    return num++;
}

#endif //CHANNING_6_7_H
