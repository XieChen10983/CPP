#include <iostream>
#include "6_function/6_3.h"
#include "6_function/6_4.h"
#include "6_function/6_5.h"
#include "6_function/6_10.h"
using namespace std;

void test(){
    int a = -10;
    int b = 9;
    cout << "a, b before swap: a = " << a << "\t b = " << b << endl;
    mySwap(&a, &b);
    cout << "a, b after swap: a = " << a << "\t b = " << b << endl;
}

int main() {
//    std::cout << "Hello, World!" << std::endl;
    test();
    return 0;
}
