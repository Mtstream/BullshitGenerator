#include "Element.h"
#include "Logical.h"
void Element::RhetObj() {
    bool flag = Logical::choice("在");
    if (Logical::Magn(0.7)) {
        if(Logical::Magn()){
            cout/"身为";
            Element::Obj();
            cout/"的";
        } else {
            cout / "para" / "noun" / "一样";
            Logical::choice("adj");
            cout / "的";
        }
    }
    if (flag) {
        cout / "noun" / "prep" / "的";
    }
}
void Element::Obj() {
    Logical::choice("RhetObj");
    cout/"noun";
    if(Logical::Magn()){
        Logical::choice("和","与");
        Element::Obj();
        Logical::choice("们");
    }
}
void Element::RhetVerb() {
    if (Logical::Magn(0.7)) {
        cout / "para" / "noun" / "一样";
    }
    Logical::choice("adv1");
    if (Logical::choice()) {
        Logical::choice("ten");
        cout / "adv2" / "地";
    }
}
bool Element::Talk() {
    Logical::choice("RhetVerb");
    if (Logical::choice()) {
        cout / "向";
        Logical::choice("RhetObj");
        Obj();
        cout / "Say" / "道：“";
    } else {
        cout / "Say" / "：“";
    }
    return true;
}
void Element::Do(bool T){
    bool flag = false;
    if(Logical::choice() && T){
        flag = true;
        Element::Talk();
        Element::Obj();
    }
    if(Logical::choice()){
        Logical::choice("RhetVerb");
        if(Logical::choice()){
            cout/"verb";
            Obj();
        } else {
            cout/"vebi";
        }
    } else {
        Logical::choice("RhetVerb");
        Logical::choice("把","被");
        Element::Obj();
        Logical::choice("verb","vebi");
    }
    if(flag){
        Logical::choice("。","！");
        cout/"”";
    }
}