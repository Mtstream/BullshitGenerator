
#include "AlthoughDo.h"
#include "../Component/Logical.h"
#include "../Component/Element.h"
#include "Command.h"
void AlthoughDo::AlthoughDo1() {
    cout/"即使"/Obj/ALT("一定")/Sentence/"，"/Obj/"也"/Sentence;
}
void AlthoughDo::AlthoughDo2() {
    cout/ALT("虽然")/Obj/ALT("也许","可能")/Sentence/ALT("，但是即便如此，", "，但是")/Obj/"也"/ALT("可能")/Sentence;
}