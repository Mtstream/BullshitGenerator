#include "WordFactory.h"
#include <iostream>

negate<int> negative;
WordFactory &EleChoose::operator()(WordFactory &Ele1) {
    if((rand() % 20) > 10){
        return Ele1;
    } else {
        return NULLELE;
    }
}

ostream &operator/(ostream &cout, WordFactory &parser) {
    parser.element();
    return cout;
}

void TyRhetObj::element() {
    if ((rand() % 20) > 10) {
        cout /"在|身为|作为"/Noun/Chowod(Prep) /"的";
    }else{
        cout/Para/Obj/"一样"/Chowod(Adj)/"的";
    }
}

void TyObj::element() {
    static bool flag = true;
    cout/Choele(RhetObj)/Noun;
}


void TyRhetVerb::element() {
    if (0.7 * (rand() % 20 > 10)) {
        cout/Para/Noun/"一样";
    }
    cout/Chowod(Adv1);
    if (rand() % 20 > 10) {
        cout/Chowod(Degree)/Adv2/ "地";
    }
}

void TyTalk::element() {
    Choele(RhetVerb);
    if (rand() % 20 > 10) {
        cout/"向"/Obj/Say/"道：“";
    } else {
        cout/Say/ "：“";
    }
}

void TyAction::element() {
    bool flag = false;
    if(rand() % 20 > 10){
        flag = true;
        cout/Talk/Obj;
    }
    if(rand() % 20 > 10){
        Choele(RhetVerb);
        if(rand() % 20 > 10){
            cout/Verb/Obj;
        } else {
            cout/Vebi;
        }
    } else {
        cout/Choele(RhetVerb)/"把|被"/Obj/Chowod(Verb,Vebi);
    }
    if(flag){
        cout/"！”|。”";
    }
}
