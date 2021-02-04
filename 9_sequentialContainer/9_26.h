//
// Created by Administrator on 2021/2/4.
//

#ifndef CHANNING_9_26_H
#define CHANNING_9_26_H
#include <vector>
#include <list>

using namespace std;

void func(const int* arr, int num = 10){
    vector<int> v;
    list<int> l;
    for (int i = 0; i < num; i++)
    {
        v.push_back(arr[i]);
        l.push_back(arr[i]);
    }

    cout << v.size() << endl;
    cout << l.size() << endl;

    auto vIter = v.begin();
    auto lIter = l.begin();
    while (vIter != v.end()){
        if (*vIter & 1){
            vIter = v.erase(vIter);
        }
        else
            vIter++;
    }
    while (lIter != l.end()){
        if (!(*lIter & 1)){
            lIter = l.erase(lIter);
        }
        else
            lIter++;
    }

    cout << v.size() << endl;
    cout << l.size() << endl;
}

#endif //CHANNING_9_26_H
