#include <stdio.h>
int x = 50;
void func() {
    int y = 10;
    static int z = 20;
    printf("%d, %d, %d\n", x++, y++, z++);
}
int main() {
    func();
    func();
    func();
    return 0;
}


// Solving
// 1번째 func() : x=50, y=10, z=20
// 2번째 func() : x=51, y=10, z=21
// 3번째 func() : x=52, y=10, z=22

// 출력 : 50, 10, 20
//      : 51, 10, 21
//      : 52, 10, 22

// func()안에서 x를 제외한 y와 z는 함수가 호출될 때마다 초기화 됨.
// y는 지역변수, z는 static 지역변수이기 때문에 y는 매번 10으로 초기화, z는 처음 한번만 20으로 초기화되고 이후에는 값이 유지됨.
// x는 전역변수이기 때문에 func()가 호출될 때마다 값이 유지됨. -> x는 50, 51, 52로 증가함.