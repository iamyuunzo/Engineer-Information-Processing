#include <stdio.h>
int main() {
    int x = 0x11;
    int y, z;
    y = x & 0x0f;
    z = x | 0x0f;
    printf("x=%d, y=%d, z=%d", x, y, z);
    return 0;
}

// Solving
// 16진수를 10진수로 바꾸고 그 10진수를 2진수로 바꿔서 풀기
// ★ 0xab => a는 a에 16 곱하는 부분 / b는 16진수의 0~15까지 표현하는 부분 (A~F => 10~15까지) ★
// 0x0f => (0 * 16) + (f = 15) => 0 + 15 => 15
// 0x11 => (1 * 16) + 1 => 16 + 1 => 17