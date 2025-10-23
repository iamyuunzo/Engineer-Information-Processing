#include <stdio.h>
#include <string.h>
int main() {
    char original[] = "Replace : Word.";
    char buffer[10];
    char *ptr;
    ptr = strstr(original, "Word");     // original에서 Word 찾기
    if (ptr) {
        strncpy(buffer, "Replaced", 8); // buffer에 Replaced 8글자 넣기
        strncpy(ptr, buffer, 8);        // ptr에 buffer 8글자 넣기
    }
    printf("%s\n", original);
    for(int i = 0; i < sizeof(original); i++) {     // sizeof(original) = 16 => 0 ~ 15
        printf("%c", original[i]);
    }
    return 0;
}


// Solving
// 답 - Replace : Replaced
//      Replace : Replac