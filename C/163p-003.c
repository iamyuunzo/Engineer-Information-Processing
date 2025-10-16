#include <stdio.h>
#define CAT(X, Y, Z) X##Y##Z
int main() {
    printf("%d", CAT(11, 22, 33));  // 112233
    return 0;
}


// Solving
// 답 : 112233
// ## 연산자란? 매크로에서 토큰을 연결하는 역할을 함. (토큰 결합 연산자)
// CAT(11, 22, 33) -> 11##22##33 -> 112233