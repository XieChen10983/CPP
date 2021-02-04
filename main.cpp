#include <iostream>
#include "9_sequentialContainer/9_16.h"
#include <string>
#include <vector>
using namespace std;

void test() {
    vector<int> v1 = {1, 5};
    vector<int> v = {1, 5};
    list<int> v2 = {1, 5};
    vector<double> v3 = {0.5, 0.9};
    cout << isEqualVectorInt(v1, v2) << endl;
    cout << (v1 > v) << endl;
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
