//
// Created by Administrator on 2021/2/4.
//

#ifndef CHANNING_9_19_H
#define CHANNING_9_19_H
#include <iostream>
#include <string>
#include <vector>
#include <list>
using namespace std;

void InAndOut(){
    list<string> data;
    string line;
    while ((cin >> line) && (line != "q")){
        data.push_back(line);
    }
//    for (deque<string>::const_iterator iter = data.cbegin(); iter != data.cend(); iter++)
    for (const auto & iter : data)
        cout << iter << endl;
}

#endif //CHANNING_9_19_H
