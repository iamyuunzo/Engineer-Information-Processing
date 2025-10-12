#include <stdio.h>
int main () {
    for (int i = 0; i < 10 && i % 2 == 0; i += 2) {
        printf("%d ", i);   // 0 2 4 6 8
    }
    return 0;
}

// Solving
