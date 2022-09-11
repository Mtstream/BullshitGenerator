#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include "Resolve/Resolve.h"
#include "Syntactic/AlsoDo.h"
#include "Syntactic/AlthoughDo.h"
#include "Syntactic/DoIf.h"
using namespace std;
class PrintWord{
public:
    void print(int flag = 0) {
        if (flag < 10) {
            Switch();
            print(flag + 1);
            Switch();
        }
    }
private:
    void Switch() {
        int flagQ = Resolve::choice();
        if (Resolve::choice()) {
            if (flagQ) {
                cout / "question";
            } else {
                cout / "Start";
            }
        }
        switch (rand() % 10) {
            case 1:
                IF::DoIf(flagQ);
                break;
            case 2:
                AlthoughDo::AlthoughDo1();
                break;
            case 3:
                AlthoughDo::AlthoughDo2();
                break;
            case 4:
                AlsoDo::AlsoDo1();
                break;
            case 5:
                AlsoDo::AlsoDo2();
                break;
            case 6:
                AlsoDo::AlsoDo3();
                break;
            default:
                Do();
                break;
        }
        if (flagQ) {
            cout / "？";
            cout / "End";
        } else {
            Resolve::choice("！", "。");
        }
    }
private:
    void Do(void) {
        Resolve::Obj();
        Resolve::choice("一定");
        Resolve::VerbObj();
    }
};

int main(void) {
    srand((unsigned)time(NULL));
    PrintWord().print();
    return 0;
}