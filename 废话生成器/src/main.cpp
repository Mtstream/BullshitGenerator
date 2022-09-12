#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include "Resolve/Resolve.h"
#include "Syntactic/AlsoDo.h"
#include "Syntactic/AlthoughDo.h"
#include "Syntactic/DoIf.h"
#include "Component/Logical.h"
using namespace std;
class PrintWord{
public:
    void print(int flag = 0) {
        if (flag < 15) {
            Switch();
            print(flag + 1);
        }
    }
private:
    void Switch() {
        int flagQ = Logical::choice();
        if (Logical::choice()) {
            if (flagQ) {
                cout / question;
            } else {
                cout / start;
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
                AlsoDo::Do();
                break;
        }
        if(Logical::Magn()){}
            cout/"，"/ended;
    }
};
int main(void) {
    srand((unsigned)time(NULL));
    PrintWord().print();
    return 0;
}