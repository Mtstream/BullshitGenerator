//
// Created by Jerry Zhou on 11/9/2022.
//

#include "DoIf.h"

void IF::DoIf(bool question) {
    if (question) {
        cout / "为什么";
    } else {
        choice("如果", "假设");
    }
    Obj();
    VerbObj();
    cout / "，";
    Obj();
    choice("就", "就一定");
    VerbObj();
}