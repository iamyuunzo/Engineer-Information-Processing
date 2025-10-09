#include <stdio.h>
int main() {
    int i, j;
    i = 10;
    j = 20;

    if ( i == 10 ) {
        if ( j == 10 ) {
            printf("%d, ", i = i + j);
        }
        else {
            printf("%d, ", i = i - j);  // i = 10 - 20 = -10
        }
        printf("%d, %d", i, j);
    }
    return 0;
}

// Solving
// else문에서 바뀐 -10이 다음 printf문에 똑같이 사용됨.