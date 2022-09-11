//
// Created by Jerry Zhou on 11/9/2022.
//

#include "AlsoDo.h"
#include "../Component/Logical.h"
#include "../Component/Element.h"
using namespace std;
void AlsoDo::Do() {
    Element::Obj();
    Logical::choice("一定");
    Logical::choice("会","不会");
    Element::Do();
}
void AlsoDo::AlsoDo1() {
    Element::Obj();
    cout/"不仅";
    Logical::choice("会","不会");
    Element::Do();
    cout/",还";
    Logical::choice("会","不会");
    Element::Do();
}
void AlsoDo::AlsoDo2() {
    Element::Obj();
    cout/"在";
    Element::Do();
    cout/"的同时，还会";
    Element::Do();
}
void AlsoDo::AlsoDo3() {
    Element::Obj();
    cout / "一边";
    Element::Do();
    cout / "，一边";
    Element::Do();
}