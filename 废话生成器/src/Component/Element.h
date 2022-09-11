//
// Created by Jerry Zhou on 11/9/2022.
//

#ifndef 废话生成器_ELEMENT_H
#define 废话生成器_ELEMENT_H

#include "../Resolve/Resolve.h"
class Element {
public:
    friend ostream &operator/(ostream &cout, string flag);

    static void Obj();

    static void Do(bool T = true);

private:
    static bool Talk();

    static void RhetObj();

    static void RhetVerb();
};

#endif //废话生成器_ELEMENT_H
