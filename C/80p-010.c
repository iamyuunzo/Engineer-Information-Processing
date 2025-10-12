#include <stdio.h>
int main() {
    int i, sum = 0;
    for (i = 1; i <= 10; i+=2) {
        if (i % 2 && i % 3)
            continue;
            sum += i;
    }
    printf("%d", sum);   // 12
    return 0;
}

// Solving
// 0부터 8까지 짝수만 출력하는 프로그램
