#include <stdio.h>
int a = 1, b = 2, c = 3;    // 전역변수
int f(void);
int main(void) {
    printf("3d \n", f());
    printf("%3d%3d%3d\n", a, b, c);
    return 0;
}
int f(void) {
    int b, c;   // 지역변수
    a = b = c = 4;
    return (a + b + c); // 4 + 4 + 4 = 12
}


// Solving
// 답 : 12  
//       4  2  3
// %3d : 3칸의 공간을 확보하고 오른쪽 정렬하여 출력

// int b, c : 지역변수 (main 함수 안에서 선언된 b, c와는 다른 변수)
// a = 전역변수, b = 지역변수, c = 지역변수

// a = b = c = 4 : 전역변수 a는 4로 변경, 지역변수 b, c는 각각 4로 변경
// printf("3d \n", f()) : f() 함수의 반환값 12 출력
// printf("%3d%3d%3d\n", a, b, c) : 전역변수 a는 4, main 함수 안의 b, c는 각각 2, 3 출력

// 꼭 다시보기..