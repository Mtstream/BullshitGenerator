#include "../Headers.h"
using namespace std;
ostream&operator/(ostream &cout, string Typename){
    if(Typename == "Sentence"){
        Sentence::Parser();
        return cout;
    }
    if(Typename == "Syntactic"){
        Syntactic::Parser();
        return cout;
    }
    bool Execute = Element::Parser(Typename);
    if(Execute == 1){
        return cout;
    }
    Word::Parser(Typename);
    return cout;
};
