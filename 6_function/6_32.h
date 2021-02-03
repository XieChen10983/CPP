//
// Created by Administrator on 2021/2/3.
//

#ifndef CHANNING_6_32_H
#define CHANNING_6_32_H

/*
 * 下面的函数合法吗？如果合法，说明其功能；如果不合法，修改其中的错误并解释原因
 */

// 下面的函数是合法的，其返回数组array中下标为index的元素
// 因为返回了引用，解引用之后的值是非局部变量，因此函数也可以作为左值。
int &get(int* array, int index){
    return array[index];
}

void test(){
    int a[10] = {8, 6, 7};
    for (int i = 0; i != 10; ++i)
        cout << get(a, i) << endl;
    for (int i = 0; i != 10; ++i)
        get(a, i) = i;
    for (int i = 0; i != 10; ++i)
        cout << get(a, i) << endl;
};


#endif //CHANNING_6_32_H
