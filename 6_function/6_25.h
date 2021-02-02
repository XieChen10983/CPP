//
// Created by Administrator on 2021/2/2.
//

/*
 * 6.25 编写一个main函数，令其接收两个实参，把实参的内容连接成一个string对象并输出
 */

#ifndef CHANNING_6_25_H
#define CHANNING_6_25_H
#include <string>

int main(int argc, char *argv[]){
    string res;
    for (int i = 0; i < argc; i++){
        res += argv[i];
    }
    std::cout << res << std::endl;

    return 0;
}

#endif //CHANNING_6_25_H
