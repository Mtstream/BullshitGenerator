
#ifndef 废话生成器_RESOLVE_H
#define 废话生成器_RESOLVE_H
#include <iostream>
#include <string>
using namespace std;
ostream &operator/(ostream &cout, string flag);
class Resolve{
public:
    static bool choice(string A = "", string B = "", float Magn = 1);
    static void VerbObj(bool flaga = 0);
    static void Obj(void);
};
#endif //废话生成器_RESOLVE_H
