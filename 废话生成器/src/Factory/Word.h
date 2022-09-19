
#ifndef 废话生成器_WORD_H
#define 废话生成器_WORD_H
#include <vector>
using namespace std;
ostream &operator/(ostream &cout, string str);
class Words{//库加抽象类
public:
    void operator()(string Ense);
    virtual void SystemWord();
    vector<string> WordLib;
};
static Words NULLWORD;
ostream &operator/(ostream &cout,Words &Type);
class WodChoose{
public:
    Words &operator()(Words &Type1, Words &Type2 = NULLWORD);
};
static WodChoose Chowod;
class WordsSay:public Words{
public:
    WordsSay(void);
    void SystemWord(void);
};
static WordsSay Say;
class WordsQuestion:public Words{
public:
    WordsQuestion(void);
    void SystemWord(void);
};
static WordsQuestion Question;
class WordsPara:public Words{
public:
    WordsPara(void);
    void SystemWord(void);
};
static WordsPara Para;
class WordsAdj:public Words{
public:
    WordsAdj(void);
    void SystemWord(void);
};
static WordsAdj Adj;
class WordsNoun:public Words{
public:
    WordsNoun(void);
    void SystemWord(void);
};
static WordsNoun Noun;
class WordsVerb:public Words{
public:
    WordsVerb(void);
    void SystemWord(void);
};
static WordsVerb Verb;
class WordsVebi:public Words{
public:
    WordsVebi(void);
    void SystemWord(void);
};
static WordsVebi Vebi;
class WordsDegree:public Words{
public:
    WordsDegree(void);
    void SystemWord(void);
};
static WordsDegree Degree;
class WordsAdv1:public Words{
public:
    WordsAdv1(void);
    void SystemWord(void);
};
static WordsAdv1 Adv1;
class WordsAdv2:public Words{
public:
    WordsAdv2(void);
    void SystemWord(void);
};
static WordsAdv2 Adv2;
class WordsPrep:public Words{
public:
    WordsPrep(void);
    void SystemWord(void);
};
static WordsPrep Prep;
#endif //废话生成器_WORD_H
