#include <stdio.h>
int fun(int n) {
    printf("%d ", n);
    if(n < 3) return 1;
    return (fun(n - 3) + fun(n - 2));
}
int main() {
    int k;
    k = fun(8);
    printf("%d\n", k);
    return 0;
}


// Solving
// 1. fun(8) : printf(8) -> 8, if문 미실행, return (fun(5) + fun(6))

// for fun(5):
// 2. fun(5) : printf(5) -> 5, if문 미실행, return (fun(2) + fun(3))
// 3. fun(2) : printf(2) -> 2, if문 실행, return 1
// 4. fun(3) : printf(3) -> 3, if문 미실행, return (fun(0) + fun(1))
// 5. fun(0) : printf(0) -> 0, if문 실행, return 1
// 6. fun(1) : printf(1) -> 1, if문 실행, return 1

// for fun(6):
// 7. fun(6) : printf(6) -> 6, if문 미실행, return (fun(3) + fun(4))
// 8. fun(3) : printf(3) -> 3, if문 미실행, return (fun(0) + fun(1))
// 9. fun(0) : printf(0) -> 0, if문 실행, return 1
// 10. fun(1) : printf(1) -> 1, if문 실행, return 1
// 11. fun(4) : printf(4) -> 4, if문 미실행, return (fun(1) + fun(2))
// 12. fun(1) : printf(1) -> 1, if문 실행, return 1
// 13. fun(2) : printf(2) -> 2, if문 실행, return 1

// 순서 : 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7 -> 8 -> 9 -> 10 -> 11 -> 12 -> 13 -> main k
// 전체 식 : fun(8) = fun(5) + fun(6)
//                  = (fun(2) + fun(3)) + (fun(3) + fun(4))
//                  = (1 + (fun(0) + fun(1))) + ((fun(0) + fun(1)) + (fun(1) + fun(2)))
//                  = (1 + (1 + 1)) + ((1 + 1) + (1 + 1)) = 3 + 4 = 7

// 답 : 8 5 2 3 0 1 6 3 0 1 4 1 2 7