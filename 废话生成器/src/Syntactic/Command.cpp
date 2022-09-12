
#include "Command.h"
#include "../Component/Logical.h"
#include "../Component/Element.h"
void Command::FuncSentence() {
    Logical ALT;
    switch(rand()%10){
        case 2:
            Sentence2();
            break;
        case 3:
            Sentence3();
            break;
        case 4:
            Sentence4();
            break;
        case 5:
            Sentence5();
        default:
            cout/ALT("会","不会");
            Element::FuncAction();
            break;
    }
}
void Command::Sentence2(){
    cout/ALT("是由","是根据")/Obj;
    if(Logical::Magn()){
        cout/ALT("引导去和","赶着去和")/Obj;
    }
    cout/Action;
}
void Command::Sentence3() {
    cout/ALT("会","不会")/ALT("与","和")/Obj/"一起"/Action;
}
void Command::Sentence4() {
    if(Logical::Magn()){
        cout/"觉得"/Obj;
    }
    cout/ALT("一定","肯定")/ALT("会","不会")/ALT("期盼自己","希望自己")/Action;
}
void Command::Sentence5() {
    cout/ALT("将会跟随","将会被你引导去和")/Obj/"一起"/Action;
}
