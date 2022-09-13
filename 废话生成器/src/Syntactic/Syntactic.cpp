#include "../Headers.h"
using namespace std;
bool Syntactic::Parser() {
    int RandMax = 10;
    cout/ALT(question,start);
    switch(rand()% RandMax + 1) {
        case 1:
            cout/Obj/ALT("一定")/Sentence;
            break;
        case 2:
            cout/Obj/"不仅"/Sentence/"，还"/Sentence;
            break;
        case 3:
            cout/Obj/"在"/Sentence/"的同时，还"/Sentence;
            break;
        case 4:
            cout/Obj/"一边"/Sentence/"，一边"/Sentence;
            break;
        case 5:
            cout/"即使"/Obj/ALT("一定")/Sentence/"，"/Obj/"也"/Sentence;
            break;
        case 6:
            cout/ALT("虽然")/Obj/ALT("也许","可能")/Sentence/ALT("，但是即便如此，", "，但是")/Obj/"也"/ALT("可能")/Sentence;
            break;
        case 7:
            cout/ALT("如果","假设")/Obj/Sentence/"，那么"/"Obj"/ALT("就","就一定")/Sentence;
    }
    ALT(ended);
}