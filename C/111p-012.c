// 다음은 C언어로 구현된 100을 넘지 않는 소수의 개수를 구하는 프로그램이다. 괄호에 해당하는 가장 적합한 명령을 쓰시오.
#include <stdio.h>
int isprime(int number) {
    for (int i = 2; i < number; i++) {
        if (①)
            return 0;
    }
    return 1;
}
int main() {
    int number = 100, cnt = 0;
    for (int i = 2; i < number; i++) {
        cnt = cnt + isprime(i);
    }
    printf("소수의 개수 : %d", cnt);    // 25
}


// Solving
// ① : number % i == 0
// isprime의 역할 : number가 소수인지 아닌지 판별
// 소수란? : 1과 자기 자신으로만 나누어 떨어지는 수 (즉, 2부터 number-1까지의 수로 나누어 떨어지지 않는 수)
// i는 나누는 수 (만약 number가 i로 나누어 떨어지면 소수가 아님. -> return 0)

// 어려우니까 꼭 다시보기..