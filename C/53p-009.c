#include <stdio.h>
int main() {
    int score = 85;
    char grade;
    if (score >= 90) grade='A';
    if (score >= 80) grade='B';
    if (score >= 70) grade='C';
    if (score < 70) grade='F';
    printf("학점 : %c\n", grade);   // 학점 : C
    return 0;
}

// Solving
// 함정 : if문이 각각 있기 때문에 모든 값을 비교해야 함.
// 해당되는건 B, C고 B는 C에 덮힘.