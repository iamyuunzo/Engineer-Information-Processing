#include <stdio.h>
void fn(int n) {
    printf("%d", n);
    if(n > 1)
        fn(n - 1);
    printf("%d", n);
}

int main() {
    fn(3);
    return 0;
}


// Solving
// 1. f(3) : printf(3) -> 3, if문 실행 (fn(2))
// 2. f(2) : printf(2) -> 2, if문 실행 (fn(1))
// 3. f(1) : printf(1) -> 1, if문 미실행, printf(1) -> 1
// 순서 : 1 -> 2 -> 3 -> 3 -> 2 -> 1
// 이유 : 재귀함수이기 때문에 가장 마지막에 호출된 함수부터 실행됨!!

// 3 -> 2 -> 1 -> 1 -> 2 -> 3 => 321123

// 앞의 321은 if문 실행 전, 뒤의 123은 if문 실행 후