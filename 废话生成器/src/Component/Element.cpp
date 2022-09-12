#include "Element.h"
#include "Logical.h"
void Element::RhetObj() {
    bool flag = Logical::choice("在");

    if (Logical::Magn(0.7)) {
        if(Logical::Magn()){
            cout/"身为"/"Obj"/"的";
        } else {
            cout/"para"/"noun"/"一样"/ALT("adj")/"的";
        }
    }

    if (flag) {
        cout/"noun"/"prep"/"的";
    }
}
void Element::Obj() {
    cout/ALT("RhetObj")/"noun";
    if(Logical::Magn()){
        cout/ALT("和","与")/"Obj"/ALT("们");
    }
}
void Element::RhetVerb() {
    if (Logical::Magn(0.7)) {
        cout/"para"/"noun"/"一样";
    }
    cout/ALT("adv1");
    if (Logical::Magn()) {
        cout/ALT("ten")/"adv2"/"地";
    }
}
bool Element::Talk() {
    ALT("RhetVerb");
    if (Logical::Magn()) {
        cout/"向"/"Obj"/"Say"/"道：“";
    } else {
        cout/"Say"/ "：“";
    }
    return true;
}
void Element::Action(bool T){
    bool flag = false;
    if(Logical::Magn() && T){
        flag = true;
        cout/"Talk"/"Obj";
    }
    if(Logical::Magn()){
        ALT("RhetVerb");
        if(Logical::Magn()){
            cout/"verb"/"Obj";
        } else {
            cout/"vebi";
        }
    } else {
        cout/ALT("RhetVerb")/ALT("把","被")/"Obj"/ALT("verb","vebi");
    }
    if(flag){
        cout/ALT("！”","。”");
    }
}