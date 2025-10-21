#include <stdio.h>
int main(int argc, char *argv[]) {
    char str1[20] = "KOREA";
    char str2[20] = "LOVE";
    char* p1 = NULL;
    char* p2 = NULL;
    p1 = str1;
    p2 = str2;
    str1[1] = p2[2];
    str2[3] = p1[4];
    strcat(str1, str2);
    printf("%s,", str1);
    printf("%c", *(p1 + 2));
    return 0;
}


// Solving
// strcat 코드를 못 봐서 틀림..

// 1. str1[1] = p2[2]; => p2[2] = 'V' => str1 = "KVREA"
// 2. str2[3] = p1[4]; => p1[4] = 'A' => str2 = "LOVE" -> "LOVA"
// 3. strcat(str1, str2); => str1 = "KVREA" + "LOVA" => "KVREALOVA"
// 4. printf("%s,", str1); => "KVREALOVA,"
// 5. printf("%c", *(p1 + 2)); => 'R'
// 최종 출력: KVREALOVA,R

// *(p1 + 2) => p1이 가리키는 str1의 2번째 인덱스 문자 'R'