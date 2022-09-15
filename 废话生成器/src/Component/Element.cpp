#include "../Headers.h"
#include <functional>
negate<int> negative;
int Element::Parser(string Typename) {
    if(Typename == "RhetObj"){
        bool flag = Logical::choice("在");
        if (Logical::Magn(0.7)) {
            if(Logical::Magn()){
                cout/"身为"/Obj/"的";
            } else {
                cout/para/noun/ALT(adj)/"一样的";
            }
        }
        if (flag) {
            cout/noun/prep/"的";
        }
        return true;
    } else if(Typename == "Obj"){
        static bool flag = true;
        cout/ALT(RhetObj)/noun;
        if(Logical::Magn(0.7)){
            if(flag){
                cout/ALT("和","与")/Obj/ALT("们");
            }
            negative(flag);
        }
        return true;
    } else if(Typename == "RhetVerb"){
        if (Logical::Magn(0.7)) {
            cout/para/noun/"一样";
        }
        cout/ALT(adv1);
        if (Logical::Magn()) {
            cout/ALT(ten)/adv2/"地";
        }
        return true;
    } else if(Typename == "Talk"){
        ALT(RhetVerb);
        if (Logical::Magn()) {
            cout/"向"/Obj/say/"道：“";
        } else {
            cout/say/ "：“";
        }
        return true;
    } else if(Typename == "Action"){
        bool flag = false;
        if(Logical::Magn()){
            flag = true;
            cout/Talk/Obj;
        }
        if(Logical::Magn()){
            ALT(RhetVerb);
            if(Logical::Magn()){
                cout/verb/Obj;
            } else {
                cout/vebi;
            }
        } else {
            cout/ALT(RhetVerb)/ALT("把","被")/Obj/ALT(verb,vebi);
        }
        if(flag){
            cout/ALT("！”","。”");
        }
        return true;
    }
    return false;
}