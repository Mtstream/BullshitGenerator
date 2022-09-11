#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
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
                  "我的意思是，"};
string End[] = {",这些是我们应该考虑到的。",
                ",难道你就没有考虑过这点？",
                ",很不可思议吧？",
                "，呃呃,可是以上观点我一个都不认可。",
                "，你问为什么？",
                "，可是你真觉得这句话是对的？"};
string Say[] = {"拷问着",       "说道", "苦诉",  "大吼",
                "扯着嗓子说道", "劝告", "尖叫道"};
string question[] = {"难道", "典中典,你这种人我见得多了,你就没有考虑过",
                     "可是你就没有想过", "可是你就这么肯定", "你真是愚蠢,难道"};
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
string ten[] = {"十分", "很", "究极", "非常"};
string adv2[] = {"无奈", "失望", "愤怒", "开心",
                 "用力", "绝望", "懊恼", "心不在焉"};
string adv1[] = {"忘记", "原地", "不断",       "突然",        "进一步",
                 "逐渐", "悄悄", "头也不回地", "把屁股翘起来"};
string prep[] = {"中", "里面", "外面", "上面", "下面", "内部"};
class Syntactic {
public:
  class AlsoDo {
  public:
    void AlsoDo1(void) {
      Obj();
      cout << "不仅会";
      VerbObj();
      cout << ",还会";
      VerbObj();
    }
    void AlsoDo2(void) {
      Obj();
      cout << "在";
      VerbObj();
      cout << "的同时,还会";
      VerbObj();
    }
    void AlsoDo3(void) {
      Obj();
      cout << "会一边";
      VerbObj();
      cout << ",一边";
      VerbObj();
    }
  };
  class AlthoughDo {
  public:
    void AlthoughDo1(void) {
      cout << "即使";
      Obj();
      if (Rand()) {
      } else {
        cout << "不会";
      }
      VerbObj();
      cout << ",";
      Obj();
      cout << "也会";
      VerbObj();
    }
    void AlthoughDo2(void) {
      if (Rand()) {
        cout << "虽然";
      }
      Obj();
      if (Rand()) {
        if (Rand()) {
          if (Rand()) {
            cout << "也许不会";
          } else {
            cout << ten[rand() % sizeof(ten) / sizeof(string)];
            cout << "可能不会";
          }
        } else {
          if (Rand()) {
            cout << "也许会";
          } else {
            cout << ten[rand() % sizeof(ten) / sizeof(string)];
            cout << "可能会";
          }
        }
      } else {
        cout << "会";
      }
      VerbObj();
      if (Rand()) {
        cout << ",但是即便如此,";
      } else {
        cout << ",但是";
      }
      Obj();
      cout << "也会";
      VerbObj();
    }
  };
  class IF {
  public:
    void DoIf(bool question = 0) {
      if (question) {
        cout << "为什么";
      } else {
        if (Rand()) {
          cout << "如果";
        } else {
          cout << "假设";
        }
      }
      Obj();
      VerbObj();
      cout << ",";
      Obj();
      if (Rand()) {
        if (Rand()) {
          cout << "就一定不会";
        } else {
          cout << "就不会";
        }
      } else {
        if (Rand()) {
          cout << "就一定会";
        } else {
          cout << "就会";
        }
      }
      VerbObj();
    }
  };
  static bool Rand(const float Magn = 1) {
    if (Magn * (rand() % (rand() % 101)) > 50){
      return true;
    } else {
      return false;
    }
  }
  static void Obj(void) {
    if (Rand()) {
      if (Rand()) {
        cout << "在" << noun[rand() % sizeof(noun) / sizeof(string)]
             << prep[rand() % sizeof(prep) / sizeof(string)] << "的";
      }
    } else {
      cout << adj[rand() % sizeof(adj) / sizeof(string)] << "的";
    }
    cout << noun[rand() % sizeof(noun) / sizeof(string)];
  }
  static void VerbObj(void) {
    if (Rand()) {
      cout << adv1[rand() % sizeof(adv1) / sizeof(string)];
    } else {
      cout << ten[rand() % sizeof(ten) / sizeof(string)];
      cout << adv2[rand() % sizeof(adv2) / sizeof(string)] << "地";
    }
    if (Rand()) {
      cout << verb[rand() % sizeof(verb) / sizeof(string)];
      Obj();
    } else {
      cout << vebi[rand() % sizeof(vebi) / sizeof(string)];
    }
  }
};

class PrintWord : public Syntactic {
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
    int flagQ = Rand();
    int flagT = Rand(0.5);

    if (flagT) {
      talk();
    }
    if (Rand()) {
      if (flagQ) {
        cout << question[rand() % sizeof(question) / sizeof(string)];
      } else {
        cout << Start[rand() % sizeof(Start) / sizeof(string)];
      }
    }

    switch (rand() % 10) {
    case 1:
      IF().DoIf(flagQ);
      break;
    case 2:
      AlthoughDo().AlthoughDo1();
      break;
    case 3:
      AlthoughDo().AlthoughDo2();
      break;
    case 4:
      AlsoDo().AlsoDo1();
      break;
    case 5:
      AlsoDo().AlsoDo2();
      break;
    case 6:
      AlsoDo().AlsoDo3();
      break;
    default:
      Do();
    }

    if (flagQ) {
      if (flagT) {
        cout << "？”";
      } else {
        cout << "？";
      }
    } else {
      if (Rand()) {
        cout << End[rand() % sizeof(End) / sizeof(string)];
        if (flagT) {
          cout << "”";
        }
      } else {
        if (Rand()) {
          cout << "。";
        } else {
          cout << "！";
        }
      }
    }
  }

private:
  void Do(void) {
    Obj();
    if (Rand()) {
      if (Rand()) {
        cout << "一定不会";
      } else {
        cout << "不会";
      }
    } else {
      cout << "会";
    }
    VerbObj();
  }

  void talk(void) {
    Obj();
    if (Rand()) {
      if (Rand()) {
        cout << "一定不会";
      } else {
        cout << "不会";
      }
    } else {
      cout << "会";
    }
    if (Rand()) {
      cout << adv1[rand() % sizeof(adv1) / sizeof(string)];
    } else {
      cout << ten[rand() % sizeof(ten) / sizeof(string)];
      cout << adv2[rand() % sizeof(adv2) / sizeof(string)] << "地";
    }
    cout << Say[rand() % sizeof(Say) / sizeof(string)] << "：“";
  }
};

int main(void) {
  srand((unsigned)time(NULL));
  PrintWord().print();
  return 0;
}