//
// Created by Jerry Zhou on 11/9/2022.
//

#include "AlthoughDo.h"
void AlthoughDo::AlthoughDo1(void) {
    cout / "即使";
    Obj();
    VerbObj();
    cout / "，";
    Obj();
    cout / "也";
    VerbObj();
}
void AlthoughDo::AlthoughDo2(void) {
    choice("虽然");
    Obj();
    if (choice()) {
        choice("也许", "可能");
    }
    VerbObj();
    choice("，但是即便如此，", "，但是");
    Obj();
    cout / "也";
    VerbObj();
}