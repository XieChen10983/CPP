//
// Created by Laser303 on 2021/2/18.
//

#ifndef CHANNING_8_1_H
#define CHANNING_8_1_H

/*
 * 编写函数，接受一个istream&参数，返回值类型也是istream&。此函数必须从给定流中读取数据，知道遇到文件结束标志时停止。它将读取的数据打印在标准输出上
 * 完成这些操作之后，在返回流之前，对流进行复位，使其处于有效状态。
 */
#include <iostream>
using namespace std;
#include <string>

istream& func(istream& is, const string& s = "q"){
    string word;
    while ((cin >> word) && (word != s)){
        cout << word << " ";
    }
    cout << endl;
    is.clear();
    return is;
}

#endif //CHANNING_8_1_H
