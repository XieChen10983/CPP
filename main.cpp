#include <iostream>
#include "9_sequentialContainer/9_5.h"
#include <string>
#include <vector>
using namespace std;

void test() {
    vector<int> v;
    v.push_back(4);
    v.push_back(8);
    v.push_back(7);
    v.push_back(2);
    for (int i = 0; i < 9; i++)
        cout << find(v.begin(), v.end(), i) << endl;
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
