//
// Created by Jerry Zhou on 11/9/2022.
//

#include "DoIf.h"
#include "AlthoughDo.h"
#include "../Component/Logical.h"
#include "../Component/Element.h"
void IF::DoIf(bool question) {
    if (question) {
        cout / "为什么";
    } else {
        Logical::choice("如果", "假设");
    }
    Logical::choice("RhetObj");
    Element::Obj();
    Element::Do();
    cout / "，那么";
    Element::Obj();
    Logical::choice("就", "就一定");
    Logical::choice("会","不会");
    Element::Do();
}