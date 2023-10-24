#include <string.h>
#include <stdio.h>

int main() {
    char answer[5];
    char guess[5];

   scanf("%s", answer);

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
            
            continue;
        }

        int A = 0; // 都對
        int B = 0; // 有但位置不對

        for (int i = 0; i < 4; i++) {
            if (guess[i] == answer[i]) {
                A++;
            } else if (strchr(answer, guess[i])) {
                B++;
            }
        }

        // 输出猜测结果
        printf("%dA%dB\n", A, B);
      if (A == 4) {
          break;
      }
        
    }


    return 0;
}
