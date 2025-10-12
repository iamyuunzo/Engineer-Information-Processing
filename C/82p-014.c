#include <stdio.h>
int main() {
    int i, j, sum = 0;
    for (i = 1; i < 5; i++) {
        for (j = 1; j < 5; j++) {
            if (j % 3 == 0)
                continue;
            if (i % 4 == 0)
                break;
            sum++;
        }
    }
    printf("%d", sum);   // 9
    return 0;
}