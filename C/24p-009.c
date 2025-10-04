#include<stdio.h>
int main() {
    int a = (10, 20);
    printf("%d, ", a);

    int b = (10, 20, 30);
    printf("%d, ", b);

    int c = (10, (20, 30), 40);
    printf("%d", c);
    return 0;
}


// Solving
// 콤마 연산자는 맨 오른쪽 값을 참조하여 출력함. (20, 30, 40)