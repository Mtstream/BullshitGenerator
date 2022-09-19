#include "AppendLib.h"
using namespace std;
ostream &operator/(ostream &cout,AppendMaterial &Material){
    Material.SystemMater();
    return cout;
}
void AppendMaterial::operator()(string Ense) {
    char Comps[Ense.size()];
    for (int index = 0; index < Ense.size(); index++) {
        Comps[index] = Ense[index];
    }
    char *p = strtok(Comps, "|");
    while (p != NULL) {
        string str = p;
        MaterLib.push_back(str);
        p = strtok(NULL, "|");
    }
}
void AppendMaterial::SystemMater() {
}
AppendMaterial &MatChoose::operator()(AppendMaterial &Type1, AppendMaterial &Type2) {
    if(rand() % 20 > 10){
        return Type1;
    } else {
        return Type2;
    }
}
TyBefObj::TyBefObj() {
    BefObj("");
}
void TyBefObj::SystemMater() {
    cout << BefObj.MaterLib[rand() % BefObj.MaterLib.size()];
}
TyBefAct::TyBefAct() {
    BefAct("将会被你引导|其实一点也不想|可能会|会|可能不会|不会|一定会|一定一定会|一定不会|一定一定不会|也许会|也许不会|肯定会|");
}
void TyBefAct::SystemMater() {
    cout << BefAct.MaterLib[rand() % BefAct.MaterLib.size()];;
}
TyConnect::TyConnect() {
    Connect("一般理性而言,|呃呃，我觉得你说的不对，因为|你是正确的，不过考虑到|如果提到这个，就不得不提到|你要是这么说的话，那话可就不能这么说了，我们应该考虑到|毋庸置疑的，这就是问题的关键，然而|所以|我跟你说个典故吧|然而|我们应该考虑到|捏嘛的|我们不妨设想一下这么一种情况|其实|我觉得不一定,你是错误的|我已经说了很多遍了|天呐|我的意思是|而|是这样的|我个人认为|这些是我们应该考虑到的|难道你就没有考虑过这点|很不可思议吧|呃呃,可是以上观点我一个都不认可|你问为什么|可是你真觉得这句话是对的|我跟你说，这是好的，而且没有一点坏处");
}
void TyConnect::SystemMater() {
    cout << Connect.MaterLib[rand() % Connect.MaterLib.size()];
}
