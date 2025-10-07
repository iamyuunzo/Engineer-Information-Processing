#include <stdio.h>
int main() {
    int a = 5;
    int b = 3;

    a = a << b;
    b = a >> 1;

    printf("%d,", a);   // 40
    printf("%d\n", b);  // 20

    return 0;
}

// Solving
// 무작정 숫자부터 대입하는 버릇 고치기.. 순서대로 계산하기..
// a = a<<b에서 계산한 a를 b에 대입해야하는데 그냥 5 대입하고 풀어버려서 틀림.