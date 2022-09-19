#include "Decorator.h"
#include "AppendLib.h"

void Decorator::SystemSentence() {
}
void Decorator::operator()() {
    Deco.Sens[rand() % Sens.size()].SystemSentence();
}
Sentence1 Sen1;
Sentence1::Sentence1() {
    Deco.Sens.push_back(Sen1);
}
void Sentence1::SystemSentence() {
    //cout/BefObj/Obj/Connect/BefAct/Action/","/Connect/BefAct/Action;
    cout/Obj;
}
