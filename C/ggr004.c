#include <stdio.h>

void main() {
    int n[3] = {73, 95, 82};
    int i, sum = 0;

    for (i = 0; i < 3; i++) {
        sum += n[i];
    }                           // for문을 다 실행하고 난 후 switch문으로 넘어감

    switch (sum / 30) {
        case 10:
        case 9:
            printf("A");
        case 8:
            printf("B");
        case 7:
        case 6:
            printf("C");
        default:
            printf("D");
    }
}

// Solving
// 답 : BCD

// 코드 진행 순서
// 1. 배열 n에 73, 95, 82가 저장된다.
// 2. for문을 통해 배열 n의 모든 요소가 sum에 더해진다. (sum = 250)
// 3. sum / 30의 결과는 8이 된다. (250 / 30 = 8)
// 4. switch문에서 case 8이 실행되어 "B"가 출력된다.
// 5. break문이 없으므로 이후 case 7, case 6, default까지 모두 실행되어 "C"와 "D"가 차례로 출력된다.
// 6. 최종 출력 결과는 "BCD"가 된다.