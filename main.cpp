#include <iostream>
#include "6_function/6_3.h"
#include "6_function/6_4.h"
#include "6_function/6_5.h"
#include "6_function/6_10.h"
#include "6_function/6_12.h"
#include "6_function/6_22.h"
using namespace std;

void test(){
    int a = 16;
    int b = 9;
    int* a_pointer = &a;
    int* b_pointer = &b;
    swapPointer(a_pointer, b_pointer);
    cout << *a_pointer << *b_pointer << endl;
}

int main() {
//    std::cout << "Hello, World!" << std::endl;
    test();
    return 0;
}
