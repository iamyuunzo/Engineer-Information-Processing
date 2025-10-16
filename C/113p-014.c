#include <stdio.h>
void swap(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main(void) {
    int a, b;
    a = 10;
    b = 20;
    printf("Before : %d, %d\n", a, b);
    swap(a, b);
    printf("After : %d, %d\n", a, b);
    return 0;
}


// Solving
// 답 : Before : 10, 20
//      After : 10, 20
// After에서 10, 20이 나오는 이유 : swap 함수는 a와 b의 값을 바꾸지만, main 함수의 a와 b에는 영향을 미치지 않음 (call by value)
// swap에 printf가 없음. (swap 함수 내에서만 a와 b의 값이 바뀜)
// swap 함수가 끝나면 a와 b는 사라지고 main 함수의 a와 b는 여전히 10과 20임