#include <iostream>
#include <string>
using namespace std;
#include "Word.h"
bool Word::Parser(string Typename) {
    if (Typename == "start") {
        cout <<  Start[rand() % sizeof(Start) / sizeof(string)];
    } else if (Typename == "end") {
        cout <<  End[rand() % sizeof(End) / sizeof(string)];
    } else if (Typename == "say") {
        cout <<  Say[rand() % sizeof(Say) / sizeof(string)];
    } else if (Typename == "adj") {
        cout <<  Adj[rand() % sizeof(Adj) / sizeof(string)];
    } else if (Typename == "noun") {
        cout <<  Noun[rand() % sizeof(Noun) / sizeof(string)];
    } else if (Typename == "verb") {
        cout <<  Verb[rand() % sizeof(Verb) / sizeof(string)];
    } else if (Typename == "vebi") {
        cout <<  Vebi[rand() % sizeof(Vebi) / sizeof(string)];
    } else if (Typename == "ten") {
        cout <<  Ten[rand() % sizeof(Ten) / sizeof(string)];
    } else if (Typename == "adv1") {
        cout <<  Adv1[rand() % sizeof(Adv1) / sizeof(string)];
    } else if (Typename == "adv2") {
        cout <<  Adv2[rand() % sizeof(Adv2) / sizeof(string)];
    } else if (Typename == "prep") {
        cout <<  Prep[rand() % sizeof(Prep) / sizeof(string)];
    } else if (Typename == "question") {
        cout <<  Question[rand() % sizeof(Question) / sizeof(string)];
    } else if (Typename == "para") {
        cout <<  Para[rand() % sizeof(Para) / sizeof(string)];
    } else {
        cout <<  Typename;
    }
    return true;
}
