#include <stdio.h>
#include <time.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

void say_good_morning()
{
    printf("芳乃：早安哦，今天也要元气满满地加油呢。\n");
}

void say_good_night()
{
    printf("芳乃：晚安啦，祝你有个好梦。\n");
}

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

void report_time()
{
    time_t t;
    struct tm *tm_info;
    time(&t);
    tm_info = localtime(&t);
    printf("芳乃：现在是 %02d:%02d:%02d 哦。\n", tm_info->tm_hour, tm_info->tm_min, tm_info->tm_sec);
}

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

int intimacy = 0; // 亲密度变量

void show_intimacy()
{
    printf("芳乃：我们的亲密度是 %d 哦！\n", intimacy);
}

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