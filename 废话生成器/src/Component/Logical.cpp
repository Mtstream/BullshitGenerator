
#include "Logical.h"
bool Logical::choice(std::string A, std::string B) {
    if ((rand() % 20) > 10) {
        cout / A;
        return true;
    } else {
        cout / B;
        return false;
    }
}
bool Logical::Magn(double Magn) {
    if (Magn * (rand() % 20) > 10) {
        return true;
    } else {
        return false;
    }
}
string Logical::operator()(string A,string B){
    if(Magn()){
        return A;
    } else {
        return B;
    }
}