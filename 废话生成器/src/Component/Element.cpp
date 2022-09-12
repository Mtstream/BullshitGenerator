#include "Element.h"
#include "Logical.h"
#include "../Resolve/Resolve.h"
void Element::RhetObj() {
    Logical choose;
    bool flag = Logical::choice("在");

    if (Logical::Magn(0.7)) {
        if(Logical::Magn()){
            cout/"身为"/"Obj"/"的";
        } else {
            cout/"para"/"noun"/"一样"/choose("adj")/"的";
        }
    }

    if (flag) {
        cout/"noun"/"prep"/"的";
    }
}
void Element::Obj() {
    Logical choose;
    cout/choose("RhetObj")/"noun";
    if(Logical::Magn()){
        cout/choose("和","与")/"Obj"/choose("们");
    }
}
void Element::RhetVerb() {
    Logical choose;
    if (Logical::Magn(0.7)) {
        cout/"para"/"noun"/"一样";
    }
    cout/choose("adv1");
    if (Logical::Magn()) {
        cout/choose("ten")/"adv2"/"地";
    }
}
bool Element::Talk() {
    Logical choose;
    choose("RhetVerb");
    if (Logical::Magn()) {
        cout/"向"/"Obj"/"Say"/"道：“";
    } else {
        cout/"Say"/ "：“";
    }
    return true;
}
void Element::Action(bool T){
    Logical choose;
    bool flag = false;
    if(Logical::Magn() && T){
        flag = true;
        cout/"Talk"/"Obj";
    }
    if(Logical::Magn()){
        choose("RhetVerb");
        if(Logical::Magn()){
            cout/"verb"/"Obj";
        } else {
            cout/"vebi";
        }
    } else {
        cout/choose("RhetVerb")/choose("把","被")/"Obj"/choose("verb","vebi");
    }
    if(flag){
        cout/choose("！”","。”");
    }
}