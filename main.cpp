#include <iostream>
#include "9_sequentialContainer/9_20.h"
#include <string>
#include <vector>
using namespace std;

void test() {
    list<int> li = {5, 7, 6, 9, 8, 2, 1, 0, 3, 4};
    deque<int> dan, shuang;
//
//for (list<int>::iterator iter = li.begin(); iter != li.end(); iter++)
    for (auto & ele : li){
        if (ele & 1)
            dan.push_back(ele);
        else
            shuang.push_back(ele);
    }

    cout << "single" << endl;
    for (const auto& ele : dan)
        cout << ele << endl;
    cout << "not single" << endl;
    for (const auto& ele : shuang)
        cout << ele << endl;
}

int main() {
//    std::cout << "Hello, World!" << std::endl;
    test();
//    system("pause");
    return 0;
}

//int main(int argc, char *argv[]){
//    string res;
//    for (int i = 0; i < argc; i++){
//        res += argv[i];
//    }
//    cout << res << endl;
//
//    return 0;
//}
