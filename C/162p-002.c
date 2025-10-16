#include <stdio.h>
#define NAME "홍길동"
#define AGE 43
int main() {
    int AGE = 42;
    printf("NAME is %s\n", NAME);
    printf("AGE is %d\n", AGE);
    return 0;
}


// Solving
// 답 : 오류 발생 (컴파일 오류)
// 이유 : C23 표준에서는 매크로 이름과 동일한 이름의 변수를 선언 X.
// 따라서 int AGE = 42;에서 컴파일 오류가 발생함.
// int 43 = 42; 와 같은 오류가 발생함.