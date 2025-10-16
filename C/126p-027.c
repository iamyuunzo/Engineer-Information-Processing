#include <stdio.h>
void funCount();
int main(void) {
    int num;
    for (num = 0; num < 3; num++)
        funCount();
    return 0;
}
void funCount() {
    int num = 0;
    static int count;
    printf("num = %d, count = %d\n", ++num, count++);
}


// Solving
// 답 : num = 1, count = 0
//      num = 1, count = 1
//      num = 1, count = 2

// num = 0 ~ 2까지.
// num = 0: funCount() 호출 -> num = 0 -> ++num = 1, count = 0 -> count++ = 0
// num = 1: funCount() 호출 -> num = 0 -> ++num = 1, count = 1 -> count++ = 1
// num = 2: funCount() 호출 -> num = 0 -> ++num = 1, count = 2 -> count++ = 2

// num은 지역변수로 함수가 호출될 때마다 새로 생성되어 0으로 초기화됨.