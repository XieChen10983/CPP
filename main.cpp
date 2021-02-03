#include <iostream>
#include "6_function/6_3.h"
#include "6_function/6_4.h"
#include "6_function/6_5.h"
#include "6_function/6_10.h"
#include "6_function/6_12.h"
#include "6_function/6_44.h"
#include "6_function/6_54.h"
#include <string>
#include <vector>
using namespace std;

int add_(int a, int b){
    return a + b;
}

int sub(int a, int b){
    return a - b;
}

void mul(int a, int b){
    cout << a * b << endl;
}

void test() {
//    cout << isShorter("jlsk", "lskjgsj") << endl;
    v.push_back(add_);
    v.push_back(&sub);
//    v.push_back(mul);
    cout << v.size() << endl;

    int a = 5, b = 3;
    for (auto & i : v){
        cout << i(a, b) << endl;
    }
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
