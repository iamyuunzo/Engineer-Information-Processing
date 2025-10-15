// 예제 : 참조에 의한 호출(call by reference)
// 변수의 값이 아닌 주소를 넘겨주어 함수 내에서 직접 변수의 값을 변경할 수 있다.
// 함수 안에서 원본 변수를 직접 변경할 수 있다.

#include <stdio.h>
void add(int *a) {
    (*a)++;
    printf("add: %d\n", *a);
}
int main() {
    int x = 5;
    add(&x);   // 주소값을 넘겨줌
    printf("main: %d\n", x);
    return 0;
}

// Solving
// &는 주소를 넘기고, *는 주소 안의 실제 값을 꺼내 쓴다.
// add(&x) : x의 주소를 add 함수에 넘겨줌 (&x는 x의 주소)
// void add(int *x) : add 함수가 호출됨. x는 int형 변수의 주소를 저장하는 포인터 변수
// (*x)++ : x가 가리키는 주소에 있는 실제 값을 1 증가시킴

// 꼭 다시보기..