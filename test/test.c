//new   20260609
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#ifdef _WIN32
#include <windows.h>
#endif

int main() {
#ifdef _WIN32
    // 设置控制台编码为 UTF-8，解决中文乱码
    SetConsoleOutputCP(65001);
#endif

    // 初始化随机数种子
    srand((unsigned)time(NULL));

    // 生成 1~100 的随机数
    int target = rand() % 100 + 1;
    int guess = 0;
    int count = 0;

    printf("=== 猜数字de游戏 ===\n");
    printf("我已经想好了一个 1~100 之间的数字，来猜猜看吧！\n");

    while (1) {
        printf("请输入你的猜测: ");
        scanf("%d", &guess);
        count++;

        if (guess > target) {
            printf("大了！再试试。\n");
        } else if (guess < target) {
            printf("小了！再试试。\n");
        } else {
            printf("恭喜你，猜对了！答案就是 %d。\n", target);
            printf("你一共猜了 %d 次。\n", count);
            break;
        }
    }

    return 0;
}
