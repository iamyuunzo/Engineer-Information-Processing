#include <stdio.h>
int main() {
    char list[] = "22QPP1";
    const char *pa, *pb;
    char *pc, *pd;
    pa = &list[1];  // list[]의 1번째 => 2 (문자열:2QPP1)
    list[2] = 'K';  // list[]의 2번째 부분(Q)을 K로 교체 (2KPP1) 
    pb = &list[3];  // list[]의 3번째 => P (PP1)
    pc = list;      // list[] 전체 => 22KPP1
    pd = strstr(pa, pb);    // pa(2KPP1)에서 pb(PP1) 찾기 => 있음. (PP1)
    printf("pd: %s\n", pd);
    if (pd != 0) {
        strncpy(pd, "77", 3);   // pd에 77 3글자 복사해서 넣기
        printf("pc: %s\n", pc); // pc: 22K77
    }
    printf("pb: %s\n", pb); // 바뀐 22K77 기준으로 &list[3] = 7부터 => 77
    return 0;
}


// Solving
// 답 - pd: PP1
//      pc: 22K77
//      pb: 77

// strstr(pa, pb)에서 pa가 2가 아닌 2KKP1인 이유 : &list 자체에서는 2를 가리키지만 원래는 문자열이라서 문자열 전체를 볼 수 있음.
// pa()가 2QPP1이 아니라 2KPP1인 이유 : pa는 문자열 복사본이 아니라, list 배열의 진짜 메모리 주소를 바라보는 포인터라서 원본(list)이 바뀌면 pa가 바라보는 내용도 함께 바뀜.
// strstr(pa, pb)에서 pd가 PP1인 이유 : strstr() 반환 규칙에 pa에서 pb를 찾았다면 찾은 위치의 주소를 반환하고, 못 찾으면 Null값을 반환.
// "77"은 사실 글자 2개('7', '7') + 문자열 끝표시('\0')로 되어 있음. 즉, 실제로는 3글자임 ('7', '7', '\0')