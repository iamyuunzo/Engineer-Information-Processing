#include <stdio.h>
#define PI 3.14
#define AREA(X) 2 * X * PI
int main() {
    printf("%.3f", AREA(10));   // 62.800
    return 0;
}


// Solving
// 답 : 62.800
// AREA(10) -> 2 * 10 * PI -> 2 * 10 * 3.14 -> 62.800
// PI는 매크로 상수이기 때문에 AREA(10)에서 PI는 3.14로 치환됨.
// %.3f는 소수점 이하 3자리까지 출력하는 형식 지정자. -> 62.800