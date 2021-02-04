//
// Created by Administrator on 2021/2/4.
//

#ifndef CHANNING_9_24_H
#define CHANNING_9_24_H

#include <vector>
#include <iostream>
using namespace std;

template <typename T>
T visit(vector<T> v, int method = 0){
    if (v.empty()){
        cout << "empty vector" << endl;
//        return;
    }
    switch (method % 4) {
        case 0:
            cout << "using at " << endl;
            return v.at(0);
        case 1:
            cout << "using []" << endl;
            return v[0];
        case 2:
            cout << "using begin" << endl;
            return *v.begin();
        case 3:
            cout << "using front" << endl;
            return v.front();
    }
}

#endif //CHANNING_9_24_H
