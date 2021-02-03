#include <iostream>
#include "6_function/6_3.h"
#include "6_function/6_4.h"
#include "6_function/6_5.h"
#include "6_function/6_10.h"
#include "6_function/6_12.h"
#include "6_function/6_42.h"
#include <string>
#include <vector>
using namespace std;

void test(){
    cout << make_plural(1, "channing") << endl;
    cout << make_plural(2, "channing") << endl;
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
