//
// Created by Jerry Zhou on 11/9/2022.
//

#ifndef 废话生成器_LOGICAL_H
#define 废话生成器_LOGICAL_H
#include <string>
#include "../Resolve/Resolve.h"
using namespace std;

class Logical {
public:
    static bool choice(string A = "", string B = "");
    static bool Magn(double Magn = 1);
    string operator()(string A,string B = "");
};
static Logical choose;
#endif //废话生成器_LOGICAL_H
