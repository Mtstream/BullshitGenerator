//
// Created by Jerry Zhou on 11/9/2022.
//

#include "AlsoDo.h"
#include "../Component/Logical.h"
#include "../Component/Element.h"
#include "Command.h"
using namespace std;
void AlsoDo::Do() {
    Element::Obj();
    Logical::choice("一定");
    Command::Selection();
}
void AlsoDo::AlsoDo1() {
    Element::Obj();
    cout/"不仅";
    Command::Selection();
    cout/",还";
    Command::Selection();
}
void AlsoDo::AlsoDo2() {
    Element::Obj();
    cout/"在";
    Command::Selection();
    cout/"的同时，还";
    Command::Selection();
}
void AlsoDo::AlsoDo3() {
    Element::Obj();
    cout / "一边";
    Command::Selection();
    cout / "，一边";
    Command::Selection();
}