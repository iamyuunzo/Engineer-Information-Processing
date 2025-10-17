#include <stdio.h>
void fun(int a, int b, int c) {
    if(c != 0) {
        fun(b, a + b, c - 1);
        printf("%d, %d, %d\n ", a, b, c);
    }
}
int main() {
    int i = 1, j = 1, k = 3;
    fun(i, j, k);
    return 0;
}


// Solving
// 1. fun(1, 1, 3) : if문 실행 (fun(1, 2, 2))
// 2. fun(1, 2, 2) : if문 실행 (fun(2, 3, 1))
// 3. fun(2, 3, 1) : if문 실행 (fun(3, 5, 0))
// 4. fun(3, 5, 0) : if문 미실행

// 순서 : 4 -> 3 -> 2 -> 1
// 이유 : 재귀함수이기 때문에 가장 마지막에 호출된 함수부터 실행됨!!
// 답 : 2, 3, 1
//      1, 2, 2
//      1, 1, 3