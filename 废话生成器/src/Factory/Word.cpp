
#include "Word.h"
#include <iostream>
ostream &operator/(ostream &cout,Words &Type){
    Type.SystemWord();
    return cout;
}
void Words::SystemWord() {
}
ostream &operator/(ostream &cout, string str){
    char Comps[str.size()];
    for (int index = 0; index < str.size(); index++) {
        Comps[index] = str[index];
    }
    vector<string> random;
    char *p = strtok(Comps, "|");
    while(p != NULL) {
        string str = p;
        random.push_back(str);
        p = strtok(NULL, "|");
    }
    cout << random[rand() % random.size()];
    return cout;
}
Words &WodChoose::operator()(Words &Type1, Words &Type2) {
    if(rand() % 20 > 10){
        return Type1;
    } else {
        return Type2;
    }
}
//装填器
void Words::operator()(string Ense) {
    char Comps[Ense.size()];
    for (int index = 0; index < Ense.size(); index++) {
        Comps[index] = Ense[index];
    }
    vector<string> InWords;
    char *p = strtok(Comps, "|");
    while (p != NULL) {
        string str = p;
        WordLib.push_back(str);
        p = strtok(NULL, "|");
    }
}
WordsSay::WordsSay() {
    Say("拷问|说|苦诉|大吼|扯着嗓子说|劝告|尖叫");
}
void WordsSay::SystemWord() {
    cout << Say.WordLib[rand() % Say.WordLib.size()];
}
WordsQuestion::WordsQuestion() {
    Question("难道|典中典,你这种人我见得多了,你就没有考虑过|可是你就没有想过|可是你就这么肯定|你真是愚蠢,难道");
}
void WordsQuestion::SystemWord() {
    cout << Question.WordLib[rand() % Question.WordLib.size()];
}
WordsPara::WordsPara() {
    Para("像|犹如|宛如|和");
}
void WordsPara::SystemWord() {
    cout << Para.WordLib[rand() % Para.WordLib.size()];
}
WordsAdj::WordsAdj() {
    Adj("绿色|旋转|美丽|百年|寒冷|永恒|烧毁|燃烧|死掉|碳色|活泼|静态|强大|弱小|沉底|腹鳍|冰冻|随机|高级|奢侈|肥胖|黄色|黑色|木制|铁质|纺织|正方形|圆形");
}
void WordsAdj::SystemWord() {
    cout << Adj.WordLib[rand() % Adj.WordLib.size()];
}
WordsNoun::WordsNoun() {
    Noun("我|乌鸦|码头|马桶|钻井|盾构机|负二次方|电视|垃圾桶|手机|酸液|大蒜|窗户|太阳|水枪|山脉|头|地面|氧气|手|铜条|玻璃|马桶|纸巾|行星|神秘|面粉|杯子|风扇|线条|风暴|物流|系数|观点|攻击性|错误|沙发|客厅|家里|地底|太阳|下水道|二次元|你|成绩|壁纸|酒精|洗衣机盖|悲报|背包|清单""预备课程|圆周率|代码的执行原理|钙片|软木|药丸|心脏|梦|下北泽|阴间|小行星|这个|那个|办公室|老家|屁股|实验台|皮肤|手机|电脑|椅子|米桶|热水壶|鲁迅|亚里士多德|喜马拉雅山|图标|物理|化学|颜色|灯条|雪|头像|战争|地区|语言|猫咪|路由器|低位|电平|喜剧|夕阳|飞鸟|蝴蝶|baka|引擎|塑料|速度|水池|红眼果蝇|大肠杆菌|航天楼|八爪鱼|候车大厅|小鹰星云|草履虫|绿头蝇");
}
void WordsNoun::SystemWord() {
    cout << Noun.WordLib[rand() % Noun.WordLib.size()];
}
WordsVerb::WordsVerb() {
    Verb("击打|空袭|称霸|踏破|掀翻|冰封|闪击|上|席卷|袭击|偷袭|爆破|打开|关闭|碎裂|碎裂|占领|语言攻击|冷暴力|堵塞|杀掉|进入|推出|退出|删掉|治疗|加热|烧烤|思考|记得|忘掉|清洗|轰炸|关掉|启动|拿起|驾驶|敲打|殴打|拷打|搬进|抽出|拿走|抬起|建造|点燃|安装|删除|读取|按下|旋转|扭动|抱起|粘上|盯着|张开|切开|踢掉|肘击|摊开|抹除|抹掉|蹭蹭|翘起|扭向|捏住|探望|吐向|解刨|否定|拒绝|肯定|张开嘴巴试图吃掉|希望|期盼");
}
void WordsVerb::SystemWord() {
    cout << Verb.WordLib[rand() % Verb.WordLib.size()];
}
WordsVebi::WordsVebi() {
    Vebi("抽搐|走路|死掉|卡机|排泄|自爆|发癫|害怕|思考|生存|活着|呼吸|睡觉|起飞|发疯|大哭|狂笑|狂笑|扭曲|分解|结合|融化|萎缩|膨胀|跳舞|生锈|氧化|游泳|嗯嗯了|自裁|中风");
}
void WordsVebi::SystemWord() {
    cout << Vebi.WordLib[rand() % Vebi.WordLib.size()];
}
WordsDegree::WordsDegree() {
    Degree("十分|很|究极|非常|十分甚至九分");
}
void WordsDegree::SystemWord() {
    cout << Degree.WordLib[rand() % Degree.WordLib.size()];
}
WordsAdv1::WordsAdv1() {
    Adv1("忘记|原地|不断|突然|进一步|逐渐|悄悄|把屁股翘起来|站在这里|还没睡醒");
}
void WordsAdv1::SystemWord() {
    cout << Adv1.WordLib[rand() % Adv1.WordLib.size()];
}
WordsAdv2::WordsAdv2() {
    Adv2("无奈|失望|愤怒|开心|用力|绝望|懊恼|心不在焉|头也不回");
}
void WordsAdv2::SystemWord() {
    cout << Adv2.WordLib[rand() % Adv2.WordLib.size()];;
}
WordsPrep::WordsPrep() {
    Prep("中|里面|外面|上面|下面|内部");
}
void WordsPrep::SystemWord() {
    cout << Prep.WordLib[rand() % Prep.WordLib.size()];
}

