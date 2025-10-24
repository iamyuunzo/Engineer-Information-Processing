#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "character function are fun!";
    char *first, *last;
    char result[50];

    first = strstr(str, 'a');   // strstr : 문자열을 찾는 함수
    last = strrchr(str, 'a');   // strrchr : 마지막 a

    if (first && last) {
        int distance = last - first; // 포인터끼리 뺄셈하면, 두 위치 사이의 문자 개수가 나옴
        printf("%d\n", distance);    // distance = 19-2=17

        strncpy(result, first, distance + 1);
        result[distance + 1] = '\0';
        printf("%s\n", result);
    }
    return 0;
}


// Solving
// 답 : 17
//      aracter function a