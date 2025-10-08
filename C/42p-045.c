#include <stdio.h>
int main() {
    int x = 0x15213F10 >> 4;
    char y = (char)x;
    unsigned char z = (unsigned char)x;
    printf("%d, %u", y, z);     // -15, 241
    return 0;
}

// Solving
// 비트 이동 + 부호 있는 정수(음수. signed) vs 부호 없는 정수(음수X. unsigned)
// 0x15213F10 => 0001 0101 0010 0001 0011 1111 0001 0000
// >> 4 => 0000 0001 0101 0010 0001 0011 1111 0001 (x = 015213F1)
// x는 32비트 (4bit * 8)
// char = 1byte = 8bit (큰 숫자에서 맨 끝 8비트만 남기고 나머지 다 버림)
    // 1. unsigned : 0xF1 = (15 * 16) + 1 = 241
    // 2. signed : 음수라서 241 => 0000 1110+1 = 1111 (15) => -15

// ★ 이 문제 어려우니까 꼭 다시 볼 것... ★