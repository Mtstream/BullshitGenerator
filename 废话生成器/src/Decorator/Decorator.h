//
// Created by Jerry Zhou on 18/9/2022.
//

#ifndef 废话生成器_DECORATOR_H
#define 废话生成器_DECORATOR_H
#include "../Headers.h"
#include <iostream>
#include <vector>
using namespace std;
class Decorator{
public:
    virtual void SystemSentence();
    void operator()();
    vector<Decorator> Sens;
};
static Decorator Deco;
class Sentence1:public Decorator{
public:
    Sentence1();
    void SystemSentence();
};


#endif //废话生成器_DECORATOR_H
