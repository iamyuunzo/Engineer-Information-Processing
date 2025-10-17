#include <stdio.h>
void digitVal(int num) {
    if(num < 2) {
        printf("%d", num);
    }
    else {
        digitVal(num / 2);
        printf("%d", num % 2);
    }
}
int main() {
    digitVal(10);
    return 0;
}


// Solving
// 1. digitVal(10) : else문 실행 (digit(10/2) -> digitVal(5))
// 2. digitVal(5) : else문 실행 (digit(5/2) -> digitVal(2))
// 3. digitVal(2) : else문 실행 (digit(2/2) -> digitVal(1))
// 4. digitVal(1) : if문 실행 (printf(1)) -> 1
// 순서 : 4 -> 3 -> 2 -> 1
// 이유 : 재귀함수이기 때문에 가장 마지막에 호출된 함수부터 실행됨!!
// 1 -> 0 -> 1 -> 0 => 1010


// ★ 만약에 else문의 순서가 바뀌면? ★
// 1. digitVal(10) : else문 실행 (printf(10%2) -> 0, digit(10/2) -> digitVal(5))
// 2. digitVal(5) : else문 실행 (printf(5%2) -> 1, digit(5/2) -> digitVal(2))
// 3. digitVal(2) : else문 실행 (printf(2%2) -> 0, digit(2/2) -> digitVal(1))
// 4. digitVal(1) : if문 실행 (printf(1)) -> 1
// 순서 : 1 -> 2 -> 3 -> 4
// 이유 : 재귀함수이기 때문에 가장 마지막에 호출된 함수부터 실행됨!!
// 0 -> 1 -> 0 -> 1 => 0101

// ★ printf문과 함수의 순서에 유의하기.. ★