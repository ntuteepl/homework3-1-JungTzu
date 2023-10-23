#include <string.h>
#include <stdio.h>

int main() {
    char ans[5];
    char guess[5];
  
    scanf("%s",ans);

    while (1) {
        scanf("%s", guess);

        // 檢查是否為0以結束遊戲
          if (guess[0] == '0' && guess[1] == '\0' && guess[2] == '\0' && guess[3] == '\0' && guess[4] == '\0') {

            break;
        }

        // 檢查是否為4位數
        if (strlen(guess) != 4) {
            continue;
        }

        // 檢查是否重複數字
        int wrong = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = i + 1; j < 4; j++) {
                if (guess[i] == guess[j]) {
                    wrong = 1;
                    break;
                }
            }
        }
        if (wrong) {
            continue;
        }

        int A = 0; // 都對
        int B = 0; // 有但位子不對

        for (int i = 0; i < 4; i++) {
            if (guess[i] == ans[i]) {
                A++;
            } else if (strchr(ans, guess[i])) {
                B++;
            }
        }

        printf("%dA%dB\n", A, B);

    }

    return 0;
}
