//
// Created by Jerry Zhou on 11/9/2022.
//

#include "DoIf.h"
#include "../Component/Logical.h"
void IF::DoIf(bool question) {
    if (question) {
        cout / "为什么";
    } else {
        cout/choose("如果", "假设");
    }
    cout/"Obj"/"Sentence"/"，那么"/"Obj"/choose("就","就一定")/"Sentence";
}