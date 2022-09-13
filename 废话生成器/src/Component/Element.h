
#ifndef 废话生成器_ELEMENT_H
#define 废话生成器_ELEMENT_H

#include "../Headers.h"
#include <string>
using namespace std;
class Element {
public:
    friend ostream &operator/(ostream &cout, string flag);

    static bool Parser(string Typename);
};
static string  RhetObj = "RhetObj";
static string   Obj = "Obj";
static string  RhetVerb = "RhetVerb";
static string  Action = "Action";
static string  Talk = "Talk";
#endif //废话生成器_ELEMENT_H
