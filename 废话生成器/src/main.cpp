#include "Headers.h"
using namespace std;
class PrintWord{
public:
    void print(int num = 0,int times = 0){
        if(times < num){
            cout/Syntactic;
            print(num,times + 1);
        }
    }
};
int main(void) {
    srand((unsigned)time(NULL));
    cout/"input the number of sentence you want : ";
    int num;
    cin >> num;
    PrintWord().print(num);
    return 0;
}