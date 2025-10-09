#include <stdio.h>
int main() {
    int a = 1, b = 0;
    if (a++ || ++b) {
        printf("a = %d, b = %d \n", a, b);  // a = 2, b = 0
    } else {
        printf("a = %d, b = %d \n", a, b);
    }
    return 0;
}

// Solving
// a++은 1. || 연산이기 때문에 1은 참이 되므로 ++b까지 실행 안해봐도 True
// 그래서 printf에서 b값이 ++b가 아닌 기존 b로 나옴. (a는 2)