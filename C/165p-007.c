#include <stdio.h>
#define SQR(X) X*X
int main() {
    int x = 10;
    printf("%d", SQR(x + 1));   // 21
    return 0;
}


// Solving
// 답 : 21
// SQR(X) X*X : X를 그대로 넣어서 복붙. (문자열 치환)
// SQR(x + 1) -> x + 1 * x + 1 -> x + (1 * x) + 1 -> 10 + 10 + 1 -> 21