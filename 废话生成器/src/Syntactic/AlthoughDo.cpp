//
// Created by Jerry Zhou on 11/9/2022.
//

#include "AlthoughDo.h"
#include "../Component/Logical.h"
#include "../Component/Element.h"
void AlthoughDo::AlthoughDo1() {
    cout / "即使";
    Element::Obj();
    Logical::choice("一定");
    Logical::choice("会","不会");
    Element::Do();
    cout / "，";
    Element::Obj();
    cout / "也";
    Logical::choice("会","不会");
    Element::Do();
}
void AlthoughDo::AlthoughDo2() {
    Logical::choice("虽然");
    Element::Obj();
    Logical::choice("也许","可能");
    Logical::choice("会","不会");
    Element::Do();
    Logical::choice("，但是即便如此，", "，但是");
    Element::Obj();
    cout / "也";
    Logical::choice("可能");
    Logical::choice("会","不会");
    Element::Do();
}