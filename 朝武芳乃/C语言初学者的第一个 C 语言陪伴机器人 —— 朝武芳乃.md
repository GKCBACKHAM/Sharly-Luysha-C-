# C语言初学者的第一个 C 语言陪伴机器人 —— 朝武芳乃

## 前言

作为一个刚接触 C 语言的初学者，我总觉得自己写的程序太单调。于是我尝试把编程和兴趣结合起来，写了一个简单的 **陪伴机器人**。原型是我很喜欢的《千恋＊万花》角色 **朝武芳乃**。

这个小机器人可以陪我说早安晚安，数数，报时，抽卡，占卜，还能玩“猜数字”的小游戏。另外，我加了一个 **亲密度系统**，让互动更有代入感。

下面我会把完整代码分段贴出来，并结合自己的理解做一个说明。

------

## 头文件与准备工作

```c
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
```

- `stdio.h`：标准输入输出，用来打印和接收数据。
- `time.h`：用来获取时间。
- `string.h`：用来处理字符串，比如比较命令。
- `windows.h`：这里用来设置控制台输出编码。
- `stdlib.h`：包含 `rand()`，用来生成随机数。

------

## 基础对话功能

```c
void say_good_morning()
{
    printf("芳乃：早安哦，今天也要元气满满地加油呢。\n");
}

void say_good_night()
{
    printf("芳乃：晚安啦，祝你有个好梦。\n");
}
```

这两个函数就是输出一句问候语，分别对应“早安”和“晚安”。
 功能虽然很简单，但能给程序增加一些“陪伴感”。

------

## 数数功能

```c
void count_numbers()
{
    int n;
    printf("芳乃：要数到几呢？\n");
    scanf("%d", &n);
    printf("芳乃：那芳乃开始数数啦——\n");
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
    printf("\n芳乃：数完啦。\n");
}
```

- `scanf` 让用户输入一个数字。
- 用 `for` 循环从 1 数到这个数字。
- `printf` 打印出来。

这是一个练习输入、循环和输出的好例子。

------

## 报时功能

```c
void report_time()
{
    time_t t;
    struct tm *tm_info;
    time(&t);
    tm_info = localtime(&t);
    printf("芳乃：现在是 %02d:%02d:%02d 哦。\n", tm_info->tm_hour, tm_info->tm_min, tm_info->tm_sec);
}
```

- `time()` 获取当前时间戳。
- `localtime()` 把时间转成本地时区的“时分秒”。
- `%02d` 保证时间始终是两位，比如 `09:05:07`。

------

## 抽卡功能

```c
void draw_card()
{
    int r = rand() % 100;
    printf("芳乃：开始抽卡啦——\n");
    if (r < 5)
        printf("芳乃：恭喜你抽到了SSR！\n");
    else if (r < 25)
        printf("芳乃：抽到SR啦，继续加油哦。\n");
    else
        printf("芳乃：是R呢，下次一定会更好！\n");
}
```

这里用 `rand()` 来模拟抽卡：

- 5% 的概率抽到 SSR。
- 20% 的概率抽到 SR。
- 其余是 R。

------

## 今日运势功能

```c
void fortune_today()
{
    const char *fortune[] = {
        "芳乃：今日大吉，万事顺利！",
        "芳乃：今日中吉，保持好心情哦。",
        "芳乃：今日小吉，注意休息。",
        "芳乃：今日平，平安就是福。",
        "芳乃：今日小凶，遇事不要着急。",
        "芳乃：今日大凶，但芳乃会一直陪着你！"};
    int idx = rand() % 6;
    printf("%s\n", fortune[idx]);
}
```

- 用数组存放不同的运势。
- 随机选取一个打印出来。

------

## 塔罗牌功能

```c
void tarot_draw()
{
    const char *tarot_cards[] = {
        "愚者：新的开始，勇敢迈步。",
        "魔术师：创造力与行动力。",
        "女祭司：倾听内心，保持冷静。",
        "女皇：丰收与关爱。",
        "皇帝：权威与掌控。",
        "教皇：信仰与指导。",
        "恋人：选择与关系。",
        "战车：坚持与胜利。",
        "力量：勇气与自信。",
        "隐者：思考与独处。",
        "命运之轮：变化与机遇。",
        "正义：公平与责任。",
        "倒吊人：等待与牺牲。",
        "死亡：结束与转变。",
        "节制：平衡与节制。",
        "恶魔：诱惑与束缚。",
        "塔：突变与觉醒。",
        "星星：希望与梦想。",
        "月亮：迷茫与直觉。",
        "太阳：快乐与成功。",
        "审判：觉醒与重生。",
        "世界：圆满与完成。"};
    int idx = rand() % 22;
    printf("芳乃：你抽到的塔罗牌是——%s\n", tarot_cards[idx]);
}
```

这里有 22 张塔罗牌，每次随机抽一张。

------

## 亲密度系统

```c
int intimacy = 0; // 亲密度变量

void show_intimacy()
{
    printf("芳乃：我们的亲密度是 %d 哦！\n", intimacy);
}
```

每次互动都会影响 `intimacy` 这个全局变量。

------

## 猜数字游戏

```c
void play_game()
{
    int answer = rand() % 100 + 1;
    int guess, tries = 0;
    printf("芳乃：来玩猜数字吧！我想了一个 1~100 的数字，你来猜猜看。\n");
    while (1)
    {
        printf("请输入你的猜测：");
        scanf("%d", &guess);
        tries++;
        if (guess < answer)
            printf("芳乃：再大一点哦！\n");
        else if (guess > answer)
            printf("芳乃：再小一点哦！\n");
        else
        {
            printf("芳乃：恭喜你猜对啦！你一共猜了 %d 次。\n", tries);
            intimacy += 2;
            break;
        }
    }
}
```

这个小游戏很经典：

- 程序生成一个 1~100 的随机数。
- 玩家不断输入，程序提示“再大一点”或“再小一点”。
- 猜对后结束，并提升亲密度。

------

## 主循环

```c
int main()
{
    SetConsoleOutputCP(65001);
    srand((unsigned int)time(NULL));
    char command[20];
    printf("芳乃：请告诉芳乃要做什么吧（输入 morning/night/count/time/draw/fortune/tarot/intimacy/game 选择功能，输入 exit 退出）：\n");
    while (1)
    {
        scanf("%s", command);
        if (strcmp(command, "morning") == 0)
        {
            say_good_morning();
            intimacy++;
        }
        else if (strcmp(command, "night") == 0)
        {
            say_good_night();
            intimacy++;
        }
        else if (strcmp(command, "count") == 0)
        {
            count_numbers();
            intimacy++;
        }
        else if (strcmp(command, "time") == 0)
        {
            report_time();
            intimacy++;
        }
        else if (strcmp(command, "draw") == 0)
        {
            draw_card();
            intimacy++;
        }
        else if (strcmp(command, "fortune") == 0)
        {
            fortune_today();
            intimacy++;
        }
        else if (strcmp(command, "tarot") == 0)
        {
            tarot_draw();
            intimacy++;
        }
        else if (strcmp(command, "intimacy") == 0)
        {
            show_intimacy();
        }
        else if (strcmp(command, "game") == 0)
        {
            play_game();
        }
        else if (strcmp(command, "exit") == 0)
        {
            printf("芳乃：再见啦，下次再来找芳乃玩吧。\n");
            break;
        }
        else
        {
            printf("芳乃：芳乃还不太明白你的意思呢，请重新输入。\n");
        }
    }
    return 0;
}
```

主循环里：

- 等待玩家输入命令。
- 用 `strcmp` 判断输入是否匹配功能名。
- 调用对应函数。
- 输入 `exit` 时退出程序。

------

## 运行效果示例

```
芳乃：请告诉芳乃要做什么吧（输入 morning/night/count/time/draw/fortune/tarot/intimacy/game 选择功能，输入 exit 退出）：
> morning
芳乃：早安哦，今天也要元气满满地加油呢。
> time
芳乃：现在是 09:42:13 哦。
> draw
芳乃：开始抽卡啦——
芳乃：抽到SR啦，继续加油哦。
> intimacy
芳乃：我们的亲密度是 3 哦！
```

------

## 小结

这个小程序虽然简单，但用到了不少 C 语言知识：

- 输入输出：`scanf`、`printf`
- 流程控制：`if`、`for`、`while`
- 随机数：`rand()`
- 时间处理：`time()`、`localtime()`
- 字符串比较：`strcmp`
- 全局变量：`intimacy`

目前它还是一个命令行程序，没有界面。因为我是 C 语言初学者，还没有尝试图形化。如果有大佬能分享一些 **C 语言图形界面编程**（比如 Win32 API、GTK 或 Qt）方面的思路，或者需要注意的坑，那就太好了 🙏。