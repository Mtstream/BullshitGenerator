#include "../Headers.h"
void Sentence::Parser() {
    int RandMax = 8;
    switch(rand() % (RandMax * 2)){
        case 1:
            cout/ALT("是由","是根据")/Obj/Action/"的";
            break;

        case 2:

            cout/ALT("与","和")/Obj/"一起"/Action;

            break;
        case 3:

            if(Logical::Magn()){
                cout/"觉得"/Obj;
            }
            cout/ALT("一定","肯定")/ALT("会","不会")/ALT("期盼自己","希望自己")/Action;

            break;
        case 4:

            cout/ALT("将会跟随","将会被你引导去和")/Obj/"一起"/Action;

            break;
        default:

            cout/ALT(ALT("会","不会"))/Action;

            break;
    }
}