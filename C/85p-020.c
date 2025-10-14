#include <stdio.h>
int main() {
    int a, b;
    a = 2;
    while( a-- > 0 ) {
        printf("a = %d\n", a);
    }
    for (b = 0; b < 2; b++) {
        printf("a = %d\n", a++);
    }
    return 0;
}

// Solving
// a = 1
// a = 0
// a = -1
// a = 1
// -1이 나오는 이유 : while문에서 a가 0이 되었을 때, a-- > 0 조건문에서 a가 먼저 1감소한 후에 비교하기 때문에 0 > 0이 되어 거짓이 되지만, a는 이미 -1이 된 상태이다.
// 내가 틀린 이유 : a = 0이 됐을 때 while문이 종료된다고 생각했음.