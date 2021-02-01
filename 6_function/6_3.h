//
// Created by Administrator on 2021/2/1.
//
# include<string>
//# include<assert>

#ifndef CHANNING_6_3_H
#define CHANNING_6_3_H
/*
 * 编写自己的fact函数
 */


long long fact(int n){
//    static_assert(n >= 0, "input n should not be a negative number.");
    long long res = 1;
    if ((n == 0) || (n == 1)) return res;
    else{
        while (n > 1){
            res *= n;
            n--;
        }
        return res;
    }
}

#endif //CHANNING_6_3_H
