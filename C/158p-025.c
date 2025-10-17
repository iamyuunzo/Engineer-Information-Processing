#include <stdio.h>
int fun(int n) {
    if (n < 3) return 1;
    int result = fun(n - 3) + fun(n - 2);
    printf("%d ", n);
    return result;
}
int main() {
    int k;
    k = fun(8);
    printf("%d\n", k);
    return 0;
}


// Solving
// 답 : 3 5 3 4 6 8 7

// 1. fun(8) : if문 미실행, return (fun(5) + fun(6))

// for fun(5):
// 2. fun(5) : if문 미실행, return (fun(2) + fun(3))
// 3. fun(2) : if문 실행, return 1
// 4. fun(3) : if문 미실행, return (fun(0) + fun(1))
// 5. fun(0) : if문 실행, return 1
// 6. fun(1) : if문 실행, return 1

// for fun(6):
// 7. fun(6) : if문 미실행, return (fun(3) + fun(4))
// 8. fun(3) : if문 미실행, return (fun(0) + fun(1))
// 9. fun(0) : if문 실행, return 1
// 10. fun(1) : if문 실행, return 1
// 11. fun(4) : if문 미실행, return (fun(1) + fun(2))
// 12. fun(1) : if문 실행, return 1
// 13. fun(2) : if문 실행, return 1

// 순서 : 재귀 호출이 끝난 후에 printf문이 실행되므로 거꾸로 출력됨
// 3 밑으로는 return 1이기 때문에 왼쪽부터 fun(3), fun(5), fun(6)안의 fun(3), fun(4), fun(6), fun(8) 순서로 출력됨

// 전체 식 : fun(8) = fun(5) + fun(6)
//                  = (fun(2) + fun(3)) + (fun(3) + fun(4))
//                  = (1 + (fun(0) + fun(1))) + ((fun(0) + fun(1)) + (fun(1) + fun(2)))
//                  = (1 + (1 + 1)) + ((1 + 1) + (1 + 1)) = 3 + 4 = 7

// 답 : 3 5 3 4 6 8 7