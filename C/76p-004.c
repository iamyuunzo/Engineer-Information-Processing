#include <stdio.h>
int main() {
    int j;
    int sum = 0;
    for ( j = 2; j <=30; j+=5)
        sum = sum + 1;
    printf("%d, %d", j, sum);   // 32, 6
    return 0;
}

// Solving
// j = 2, 7, 12, 17, 22, 27, 32 (j가 30보다 커지면 for문 종료)
// sum = 0, 1, 2, 3, 4, 5, 6
// 최종적으로 j = 32, sum = 6