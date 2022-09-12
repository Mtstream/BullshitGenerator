//
// Created by Jerry Zhou on 11/9/2022.
//
//通用句式不能有连接词
#include "Command.h"
#include "../Component/Logical.h"
#include "../Component/Element.h"
void Command::Selection() {
    switch(rand()%10){
        case 1:
            Command1();
            break;
        case 2:
            Command2();
            break;
        case 3:
            Command3();
            break;
        case 4:
            Command4();
            break;
        case 5:
            Command5();
        default:
            Logical::choice("会","不会");
            Element::Do();
            break;
    }
}
void Command::Command1() {
    Logical::choice("站在这里被","还没睡醒就被");
    Element::Obj();
    Logical::choice("引导去和","赶着去和");
    Element::Obj();
    cout/"一起";
    Element::Do();
}
void Command::Command2(){
    Logical::choice("是由","是根据");
    Element::Obj();
    Logical::choice("RhetVerb");
    cout/"verb"/"的";
}
void Command::Command3() {
    Logical::choice("会","不会");
    Logical::choice("与","和");
    Element::Obj();
    cout/"一起";
    Element::Do();
}
void Command::Command4() {
    cout/"觉得";
    Element::Obj();
    Logical::choice("一定","肯定");
    Logical::choice("会","不会");
    Logical::choice("期盼","希望");
    Element::Obj();
    cout/"在自己";
    Element::Do();
    cout/"的时候";
    Element::Do();
}
void Command::Command5() {
    Logical::choice("将会跟随","将会被你引导去和");
    Element::Obj();
    cout/"一起";
    Element::Do();
}
void Command::Command6(void){

}
