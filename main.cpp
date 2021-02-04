#include <iostream>
#include "9_sequentialContainer/9_5.h"
#include <string>
#include <vector>
using namespace std;

void test() {
    vector<int> v1;
    const vector<int> v2;
    auto it1 = v1.begin(), it2 = v2.begin();
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
