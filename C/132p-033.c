#include <stdio.h>
int g = 5;      // 전역변수
void func1(int n) {
    static int s = 2;   // static 지역변수
    s += n;
    g += n;
    printf("%d, %d\n", s, g);
}
void func2() {
    int g = 10;    // 지역변수 (func2 안에서만 유효)
    g += 5;
    printf("%d\n,", g);
}
int main() {
    func1(3);
    func2();
    func1(4);
    func2();
    printf("%d\n", g);
    return 0;
}


// Solving
// 1번째 func1(3) : s=2+3=5, g=5+3=8
// 1번째 func2() : 지역변수 g=10+5=15
// 2번째 func1(4) : s=5+4=9, g=8+4=12 (12인 이유 : func1에서 g는 전역변수이기 때문에 이전에 8이 된 상태에서 4가 더해짐)
// 2번째 func2() : 지역변수 g=10+5=15
// main() 마지막 : 전역변수 g=12  (12인 이유 : func1에서 g는 전역변수이기 때문에 이전에 8이 된 상태에서 4가 더해짐)

// 1번째 func1(3)에서 g=8이 되고, func1에는 g가 지역변수 선언이 되어있지 않기 때문에 2번째 func1(4)에서 g는 전역변수로 인식되어 8+4=12가 됨.
// 마지막 출력에서 g는 전역변수이기 때문에 12가 출력됨.

// 출력  : 5, 8
//      : 15
//      : 9, 12
//      : 15
//      : 12