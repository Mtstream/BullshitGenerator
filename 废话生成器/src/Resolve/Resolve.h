
#ifndef 废话生成器_RESOLVE_H
#define 废话生成器_RESOLVE_H
#include <iostream>
#include <string>
using namespace std;
ostream &operator/(ostream &cout, string flag);
static string  start = "start";
static string   ended = "end";
static string   say = "say";
static string   question = "question";
static string   para = "para";
static string   adj = "adj";
static string  noun = "noun";
static string   verb = "verb";
static string  vebi = "vebi";
static string  ten = "ten";
static string  adv1 = "adv1";
static string   adv2 = "adv2";
static string   prep = "prep";

static string  RhetObj = "RhetObj";
static string   Obj = "Obj";
static string  RhetVerb = "RhetVerb";
static string  Action = "Action";
static string  Talk = "Talk";
static string  Sentence = "Sentence";
#endif //废话生成器_RESOLVE_H
