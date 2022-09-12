
#include "DoIf.h"
#include "../Component/Logical.h"
void IF::DoIf(bool question) {
    if (question) {
        cout / "为什么";
    } else {
        cout/ALT("如果", "假设");
    }
    cout/"Obj"/"Sentence"/"，那么"/"Obj"/ALT("就","就一定")/"Sentence";
}