#include <stdio.h>
int main() {
    int num1 = 5;
    int num2 = -5;
    printf("%d, %d", ~num1, ~num2); 
    return 0;
}

// Solving
// 음수 계산 (C에서 정수는 2의 보수 형태로 저장 됨.)
// ★ ~x == -(x+1) ★ 이거 꼭 외울 것!!
// ex. ~5 = -(5+1) = -6 / ~(-5) = -(-5+1) = 4
