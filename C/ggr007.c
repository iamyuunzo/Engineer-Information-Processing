#include <stdio.h>

int isPrime(int number) {
    int i;
    for (i = 2; i < number; i++) {
        if (number % i == 0) {
            return 0; // Not a prime number (소수 아님)
        }
    }
    return 1; // Is a prime number (소수임)
}

int main(void) {
    int number = 13195, max_div = 0, i;
    for (i = 2; i < number; i++) {
        if (isPrime(i) == 1 && number % i == 0) {   // i가 소수이고, i가 13195를 나누어 떨어지게 하는 경우
            max_div = i;
        }
    }
    printf("%d", max_div);
    return 0;
}

// Solving
// 답 : 29

// 어떤 수(number)의 가장 큰 소인수를 찾는 문제
// 소인수 : 5, 7, 13, 29

// 코드 진행 순서
// 1. isPrime 함수는 주어진 숫자가 소수인지 아닌지를 판단한다.
// 2. main 함수에서 2부터 13194까지의 숫자를 반복하면서 소수인지 확인하고, 소수이면서 13195의 약수인 경우 max_div에 저장한다.
// 3. 반복이 끝나면 max_div에는 13195의 가장 큰 소수가 저장된다.
// 4. 최종적으로 max_div를 출력하면 29가 된다.