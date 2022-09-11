#include <string>
#include <iostream>
#include "../Component/Logical.h"
#include "../Component/Element.h"
using namespace std;
string Start[] = {"一般理性而言,",
                  "呃呃，我觉得你说的不对，因为",
                  "你是正确的，不过考虑到",
                  "如果提到这个，就不得不提到",
                  "你要是这么说的话，那话可就不能这么说了，我们应该考虑到",
                  "毋庸置疑的，这就是问题的关键，然而",
                  "所以",
                  "我跟你说个典故吧，",
                  "然而",
                  "我们应该考虑到",
                  "捏嘛的",
                  "我们不妨设想一下这么一种情况，",
                  "其实",
                  "我觉得不一定,你是错误的，",
                  "我已经说了很多遍了，",
                  "天呐！",
                  "我的意思是，",
                  "而","是这样的，"};
string End[] = {"这些是我们应该考虑到的。",
                "难道你就没有考虑过这点？",
                "很不可思议吧？",
                "呃呃,可是以上观点我一个都不认可。",
                "你问为什么？",
                "可是你真觉得这句话是对的？",
                "我跟你说，这是好的，而且没有一点坏处。"};
string Say[] = {"拷问", "说", "苦诉", "大吼", "扯着嗓子说", "劝告", "尖叫"};
string question[] = {"难道", "典中典,你这种人我见得多了,你就没有考虑过",
                     "可是你就没有想过", "可是你就这么肯定", "你真是愚蠢,难道"};
string para[] = {"像", "犹如", "宛如", "和"};
string adj[] = {"绿色", "旋转", "美丽", "百年", "寒冷", "永恒",   "烧毁",
                "燃烧", "死掉", "碳色", "活泼", "静态", "强大",   "弱小",
                "沉底", "腹鳍", "冰冻", "随机", "高级", "奢侈",   "肥胖",
                "黄色", "黑色", "木制", "铁质", "纺织", "正方形", "圆形"};
string noun[] = {"我",         "乌鸦",       "码头",
                 "马桶",       "钻井",       "盾构机",
                 "负二次方",   "电视",       "垃圾桶",
                 "手机",       "酸液",       "大蒜",
                 "窗户",       "太阳",       "水枪",
                 "山脉",       "头",         "地面",
                 "氧气",       "手",         "铜条",
                 "玻璃",       "马桶",       "纸巾",
                 "行星",       "神秘",       "面粉",
                 "杯子",       "风扇",       "线条",
                 "风暴",       "物流",       "系数",
                 "观点",       "攻击性",     "错误",
                 "沙发",       "客厅",       "家里",
                 "地底",       "太阳",       "下水道",
                 "二次元",     "你",         "成绩",
                 "壁纸",       "酒精",       "洗衣机盖",
                 "悲报",       "背包",       "清单",
                 "预备课程",   "圆周率",     "代码的执行原理",
                 "钙片",       "软木",       "药丸",
                 "心脏",       "梦",         "下北泽",
                 "阴间",       "小行星",     "这个",
                 "那个",       "办公室",     "老家",
                 "屁股",       "实验台",     "皮肤",
                 "手机",       "电脑",       "椅子",
                 "米桶",       "热水壶",     "鲁迅",
                 "亚里士多德", "喜马拉雅山", "图标",
                 "物理",       "化学",       "颜色",
                 "灯条",       "雪",         "头像",
                 "战争",       "地区",       "语言",
                 "软棒",       "猫咪",       "路由器",
                 "低位",       "电平",       "喜剧",
                 "枕头",       "碎片",       "山川",
                 "夕阳",       "飞鸟",       "蝴蝶",
                 "baka",       "引擎",       "塑料",
                 "速度",       "水池"

};
string verb[] = {"击打", "袭击", "偷袭", "爆破", "打开", "关闭",
                 "堵塞", "杀掉", "进入", "推出", "退出", "删掉",
                 "治疗", "加热", "烧烤", "思考", "记得", "忘掉",
                 "清洗", "轰炸", "关掉", "启动", "拿起", "驾驶",
                 "敲打", "殴打", "拷打", "搬进", "抽出", "拿走",
                 "抬起", "建造", "点燃", "安装", "删除", "读取",
                 "按下", "旋转", "扭动", "抱起", "粘上", "盯着",
                 "张开", "切开", "踢掉", "肘击", "摊开", "抹除",
                 "抹掉", "蹭蹭", "翘起", "扭向", "捏住", "探望",
                 "吐向", "解刨", "否定", "拒绝", "肯定", "张开嘴巴试图吃掉"};
string vebi[] = {"抽搐",   "走路", "死掉", "卡机", "排泄", "自爆", "发癫",
                 "害怕",   "思考", "生存", "活着", "呼吸", "睡觉", "起飞",
                 "发疯",   "大哭", "狂笑", "狂笑", "扭曲", "分解", "结合",
                 "融化",   "萎缩", "膨胀", "跳舞", "生锈", "氧化", "游泳",
                 "嗯嗯了", "自裁", "中风"};
string ten[] = {"十分", "很", "究极", "非常","十分甚至九分"};
string adv2[] = {"无奈", "失望", "愤怒", "开心",
                 "用力", "绝望", "懊恼", "心不在焉","头也不回"};
string adv1[] = {"忘记", "原地", "不断",       "突然",        "进一步",
                 "逐渐", "悄悄", "把屁股翘起来"};
string prep[] = {"中", "里面", "外面", "上面", "下面", "内部"};
#include "Resolve.h"
#include<iostream>

ostream&operator/(ostream &cout, string flag){
    if (flag == "RhetObj"){
        Element::RhetObj();
        return cout;
    } else if (flag == "Obj") {
        Element::Obj();
        return cout;
    } else if (flag == "RhetVerb") {
        Element::RhetVerb();
        return cout;
    } else if (flag == "Do") {
        Element::Do();
        return cout;
    }else if (flag == "Talk") {
        Element::Talk();
        return cout;
    }
    if (flag == "Start") {
        cout << Start[rand() % sizeof(Start) / sizeof(string)];
    } else if (flag == "End") {
        cout << End[rand() % sizeof(End) / sizeof(string)];
    } else if (flag == "Say") {
        cout << Say[rand() % sizeof(Say) / sizeof(string)];
    } else if (flag == "adj") {
        cout << adj[rand() % sizeof(adj) / sizeof(string)];
    } else if (flag == "noun") {
        cout << noun[rand() % sizeof(noun) / sizeof(string)];
    } else if (flag == "verb") {
        cout << verb[rand() % sizeof(verb) / sizeof(string)];
    } else if (flag == "vebi") {
        cout << vebi[rand() % sizeof(vebi) / sizeof(string)];
    } else if (flag == "ten") {
        cout << ten[rand() % sizeof(ten) / sizeof(string)];
    } else if (flag == "adv1") {
        cout << adv1[rand() % sizeof(adv1) / sizeof(string)];
    } else if (flag == "adv2") {
        cout << adv2[rand() % sizeof(adv2) / sizeof(string)];
    } else if (flag == "prep") {
        cout << prep[rand() % sizeof(prep) / sizeof(string)];
    } else if (flag == "question") {
        cout << question[rand() % sizeof(question) / sizeof(string)];
    } else if (flag == "para") {
        cout << para[rand() % sizeof(para) / sizeof(string)];
    } else {
        cout << flag;
    }
    return cout;
};
