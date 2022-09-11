#include "Element.h"
#include "Logical.h"
void Element::RhetObj() {
    bool flag = Logical::choice("在");
    if (Logical::Magn(0.7)) {
        cout / "para" / "noun" / "一样";
        Logical::choice("adj");
        cout / "的";
    }
    if (flag) {
        cout / "noun" / "prep" / "的";
    }
}
void Element::Obj() {
    Logical::choice("RhetObj");
    cout/"noun";
    if(Logical::Magn(0.7)){
        cout/"的"/"noun";
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
void Element::Do(){
    bool flag = false;
    if(Logical::choice()){
        flag = true;
        Element::Talk();
        Logical::choice("RhetObj");
        Element::Obj();
    }
    if(Logical::choice()){
        Logical::choice("RhetVerb");
        if(Logical::choice()){
            cout/"verb";
            Logical::choice("RhetObj");
            Obj();
        } else {
            cout/"vebi";
        }
    } else {
        Logical::choice("把","被");
        Logical::choice("RhetObj");
        Obj();
        Logical::choice("RhetVerb");
        Logical::choice("vebi","verb");
    }
    if(flag){
        cout/"！”";
    }
}