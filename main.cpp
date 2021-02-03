#include <iostream>
#include "6_function/6_3.h"
#include "6_function/6_4.h"
#include "6_function/6_5.h"
#include "6_function/6_10.h"
#include "6_function/6_12.h"
#include "6_function/6_32.h"
#include <string>
using namespace std;

void test(){
    int a[10] = {8, 6, 7};
    for (int i = 0; i != 10; ++i)
        cout << get(a, i) << endl;
    for (int i = 0; i != 10; ++i)
        get(a, i) = i;
    for (int i = 0; i != 10; ++i)
        cout << get(a, i) << endl;
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
