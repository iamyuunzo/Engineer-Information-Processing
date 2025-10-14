#include <stdio.h>
int main() {
    int i, sum = 0;
    for (i = 1; i <= 10; i+=2) {
        if (i % 2 && i % 3)
            continue;
        sum += i;
    }
    printf("%d", sum);   // 12
    return 0;
}

// Solving
// 페이크 주의 : 그냥 값끼리의 비교인데 내가 i % 2 == 0 이런식으로 생각함.
// i = 1, 3, 5, 7, 9 (i가 10보다 커지면 for문 종료) (i+=2이기 때문에)
// ex i = 1) 1 % 2 = 1 (참), 1 % 3 = 1 (참) -> if문 참 -> continue 실행
// ex i = 3) 3 % 2 = 1 (참), 3 % 3 = 0 (거짓) -> if문 거짓 -> sum = 0 + 3 = 3
// ex i = 5) 5 % 2 = 1 (참), 5 % 3 = 2 (참) -> if문 참 -> continue 실행
// ex i = 7) 7 % 2 = 1 (참), 7 % 3 = 1 (참) -> if문 참 -> continue 실행
// ex i = 9) 9 % 2 = 1 (참), 9 % 3 = 0 (거짓) -> if문 거짓 -> sum = 3 + 9 = 12
// 최종적으로 sum = 12
