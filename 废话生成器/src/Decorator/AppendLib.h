#ifndef 废话生成器_APPENDLIB_H
#define 废话生成器_APPENDLIB_H
#include "../Headers.h"

class AppendMaterial{
public:
    void operator()(string Ense);
    virtual void SystemMater();
    vector<string> MaterLib;
};
static AppendMaterial NONEMAT;
ostream &operator/(ostream &cout,AppendMaterial &Material);
class MatChoose{
public:
    AppendMaterial &operator()(AppendMaterial &Type1,AppendMaterial &Type2 = NONEMAT);
};
static MatChoose ChoMat;
class TyBefObj:public AppendMaterial{
public:
    TyBefObj();
    void SystemMater();
};
static TyBefObj BefObj;
class TyBefAct:public AppendMaterial{
public:
    TyBefAct();
    void SystemMater();
};
static TyBefAct BefAct;
class TyConnect:public AppendMaterial{
public:
    TyConnect();
    void SystemMater();
};
static TyConnect Connect;
#endif //废话生成器_APPENDLIB_H
