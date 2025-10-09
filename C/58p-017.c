#include <stdio.h>
int main() {
    int i = 3;
    int j = 4;
    if ( (++i > j--) && (i++ < --j) )
        i = i-- + ++j;
    else
        j = i-- - --j;
    printf("%d %d\n", i, j);    // 3 2
    return 0;
}

// Solving
// 늘 왼쪽부터 계산하는걸 잊지말기. 왼쪽부터 차례대로 계산하기
// ++i > j-- => 4 > 4 => False (&&이기 때문에 이미 조건식 전체가 False라서 뒤에 더 실행 안해도 됨.)
// j = i-- - --j = 4 - 2 = 2, i = i-- 때매 4 -> 3