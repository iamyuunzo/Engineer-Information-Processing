// 다음의 출력 결과를 참고하여, ①에 들어갈 알맞은 답을 작성하시오.
// 10 9 8 7 6 5 4 3 2 1 0

#include <stdio.h>
int main() {
    int n = 10;
    while (n ① 0) {
        printf("%d", n);
        n--;
    }
    return 0;
}


// Solving
// 답 : >=
// 출력에서 0이 포함되어 있기 때문에 n이 0보다 크거나 같을 때까지 반복.