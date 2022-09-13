
#ifndef 废话生成器_LOGICAL_H
#define 废话生成器_LOGICAL_H
#include "../Headers.h"
using namespace std;

class Logical {
public:
    static bool choice(string A = "", string B = "");
    static bool Magn(double Magn = 1);
    string operator()(string A,string B = "");
};
static Logical ALT;
#endif //废话生成器_LOGICAL_H
