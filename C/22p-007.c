#include <stdio.h>
int main() {
    char c = 'A';
    char d = '0';
    int i = 10, j = 20, k = 30;
    printf("출력 프로그램\n");
    printf("c=%c\n", c);
    printf("c=%d\n", c);
    printf("d=%c\n", d);
    printf("d=%d\n", d);
    printf("i=%d, j=%d, k=%d", i, j, k);
    return 0;
}

// Solving
// 문자를 숫자로 출력할 때, ASCII 코드로 출력함.
// A의 숫자는 65, 문자 '0'의 숫자는 48 ('0'이 숫자가 아닌 문자라는 것을 잘 인지할 것.)
