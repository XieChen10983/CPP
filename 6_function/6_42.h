//
// Created by Administrator on 2021/2/3.
//

#ifndef CHANNING_6_42_H
#define CHANNING_6_42_H

//typedef int size_t;

string make_plural(size_t ctr, const string& word, const string& ending = "s"){
    return (ctr > 1) ? word + ending : word;
}

#endif //CHANNING_6_42_H
