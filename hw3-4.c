#include <stdio.h>

int main() {
    char answer[5] = "1234"; // 答案
    char guess[5]; // 存储用户猜测的答案

    printf("猜数字游戏开始！\n");

    while (1) {
        printf("请输入你的猜测（4位不重复数字，输入0结束）: ");
        scanf("%s", guess);

        // 检查是否输入了0来结束游戏
        if (guess[0] == '0') {
            break;
        }

        // 检查是否输入合法的4位数字
        if (strlen(guess) != 4) {
            printf("请输入4位数字。\n");
            continue;
        }

        // 检查是否有重复数字
        int hasDuplicates = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = i + 1; j < 4; j++) {
                if (guess[i] == guess[j]) {
                    hasDuplicates = 1;
                    break;
                }
            }
        }
        if (hasDuplicates) {
            printf("请不要输入重复的数字。\n");
            continue;
        }

        int A = 0; // 位置和值都匹配的数字个数
        int B = 0; // 值匹配但位置不匹配的数字个数

        for (int i = 0; i < 4; i++) {
            if (guess[i] == answer[i]) {
                A++;
            } else if (strchr(answer, guess[i])) {
                B++;
            }
        }

        // 输出猜测结果
        printf("%dA%dB\n", A, B);

        // 检查是否猜中
        if (A == 4) {
            printf("恭喜你猜中了！答案是 %s\n", answer);
            break;
        }
    }

    printf("游戏结束。\n");

    return 0;
}
