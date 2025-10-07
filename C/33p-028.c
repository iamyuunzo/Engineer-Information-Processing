#include <stdio.h>
int main() {
    int a = 5, b = 10, c;
    c = a++ + --b + a;      // a++때문에 a는 6으로 계산됨.
    printf("c: %d\n", c);
    return 0;
}

// Solving
// 증감 연산자의 동작 시점 : 증감은 “줄 단위”가 아니라 “식 단위” 로 작동
// 즉, 같은 줄 안에서도 앞에서 a++을 쓰면 그 식이 끝나는 순간에 증가가 반영됨.