#include <iostream>
#include "6_function/6_3.h"
#include "6_function/6_4.h"
#include "6_function/6_5.h"
#include "6_function/6_10.h"
#include "6_function/6_12.h"
#include "6_function/6_7.h"
using namespace std;

void test(){
    for (int i = 0; i < 10; i++)
        cout << countUseTime() << endl;
}

int main() {
//    std::cout << "Hello, World!" << std::endl;
    test();
    return 0;
}
