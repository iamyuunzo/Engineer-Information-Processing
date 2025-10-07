#include <stdio.h>
int main(void) {
    int a = 5, b = 3, c = 12;
    int t1, t2, t3;
    t1 = a && b;
    t2 = a || b;
    t3 = !c;
    printf("%d", t1 + t2 + t3);
    return 0;
}

// Solving
// 논리 연산인데 비트 연산으로 착각해서 틀림. (True = 1, False = 0)
// !(NOT연산)이 나올 때는 0을 제외한 나머지 값들이 있으면, 값이 대입되어있으니 참임.
// 값이 있는걸 NOT연산하게 되면 거짓값인 0이 대입됨.