//
// Created by Jerry Zhou on 11/9/2022.
//

#include "AlsoDo.h"
#include "../Resolve/Resolve.h"
using namespace std;
void AlsoDo::AlsoDo1(void) {
    Obj();
    cout / "不仅";
    VerbObj();
    cout / "，还";
    VerbObj();
}
void AlsoDo::AlsoDo2(void) {
    Obj();
    VerbObj(true);
    cout / "的同时，还";
    VerbObj(true);
}
void AlsoDo::AlsoDo3(void) {
    Obj();
    cout / "一边";
    VerbObj();
    cout / "，一边";
    VerbObj();
}