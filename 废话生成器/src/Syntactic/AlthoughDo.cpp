//
// Created by Jerry Zhou on 11/9/2022.
//

#include "AlthoughDo.h"
#include "../Component/Logical.h"
#include "../Component/Element.h"
#include "Command.h"
void AlthoughDo::AlthoughDo1() {
    cout/"即使"/"Obj"/("一定")/"Sentence"/"，"/"Obj"/"也"/"Sentence";
}
void AlthoughDo::AlthoughDo2() {
    cout/choose("虽然")/"Obj"/choose("也许","可能")/"Sentence"/choose("，但是即便如此，", "，但是")/"Obj"/"也"/choose("可能")/"Sentence";
}