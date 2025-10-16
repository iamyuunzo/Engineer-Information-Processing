#include <stdio.h>
#define MUL(X, Y) X * Y
int main() {
    int x = 3;
    int y = 5;

    printf("%d", MUL(x + 2, y - 1));    // 12
    return 0;
}


// Solving
// MUL(X, Y) X * Y : X와 Y를 그대로 넣어서 복붙. (문자열 치환)
// MUL(x + 2, y - 1) -> x + 2 * y - 1 = x + (2 * y) - 1
//     -> 3 + (2 * 5) - 1 = 3 + 10 - 1 = 12