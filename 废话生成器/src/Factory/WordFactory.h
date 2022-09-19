#ifndef 废话生成器_WORDFACTORY_H
#define 废话生成器_WORDFACTORY_H
#include <iostream>
using namespace std;
#include"../Headers.h"
class WordFactory {
public:
    virtual void element(){};
};
ostream &operator/(ostream &cout, WordFactory &parser);
class EleChoose{
public:
    WordFactory &operator()(WordFactory &Ele1);
};
static EleChoose Choele;
static WordFactory NULLELE;

class TyObj: public WordFactory{
public:
    void element(void);
};
static TyObj Obj;

class TyRhetObj: public WordFactory{
public:
    void element(void);
};
static TyRhetObj RhetObj;

class TyRhetVerb: public WordFactory{
public:
    void element(void);
};
static TyRhetVerb RhetVerb;

class TyTalk: public WordFactory{
public:
    void element(void);
};
static TyTalk Talk;

class TyAction: public WordFactory{
public:
    void element(void);
};
static TyAction Action;
#endif //废话生成器_WORDFACTORY_H
