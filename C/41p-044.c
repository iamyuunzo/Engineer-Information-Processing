#include <stdio.h>
int main() {
    int a = -6;
    int b = 5;
    int result = (a & b) | (~a);
    printf("result: %d\n", result);      // 5
    return 0;
}

// Solving
// 음수가 나오면 그냥 생각하기 쉽게 -(x+1) 하고 나서 반전시키기..
// -6 : 1111 1010, 5 : 0000 0101 => &연산 => 0
// ~(-6) = 5 : 0000 0101 0과 OR연산하면 5