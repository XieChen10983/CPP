//
// Created by Administrator on 2021/2/2.
//

#ifndef CHANNING_6_16_H
#define CHANNING_6_16_H
#include <string>

/*
 * 下面这个函数虽然合法，但是并不是特别有用。指出其局限性并改善。
 * 其局限性在于只能接收string型的变量，而不能接收字符串型常量，应该修改为：
 * bool my_is_empty(const string& s){return s.empty();}
 */

bool my_is_empty(string& s){
    return s.empty();
}

#endif //CHANNING_6_16_H
