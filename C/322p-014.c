// 아래의 C언어 프로그램을 컴파일 후, 명령행 인자로 x y를 입력해서 실행을 하게 되면, 파일이 하나 만들어진다. 생성된 파일의 이름을 쓰시오.
#include <stdio.h>
int main(int argc, char *argv[]) {
    FILE *Z = fopen(argv[2], "w");
    fprintf(Z, "hello");
    fclose(Z);
}


// Solving
// 답 : y

// 명령행 인자란? 프로그램 실행할 때 뒤에 써주는 값
// ex. 프로그램 이름이 a.exe이라면, a.exe x y
// x = 첫 번째 인자, y = 두 번째 인자

// argc : 프로그램 실행할 때 단어가 몇 개인지 알려줌
    // argv : 실행할 때 입력한 단어들을 차례로 저장한 배열

    // 예를 들어 프로그램을 이렇게 실행했다고 하면:
    // a.exe x y
    // argv[0] = "a.exe"  → 프로그램 이름
    // argv[1] = "x"      → 첫 번째 단어
    // argv[2] = "y"      → 두 번째 단어