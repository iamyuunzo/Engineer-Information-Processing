#include <stdio.h>
int main() {
    int a, b;
    a = 2;
    while( a-- > 0 ) {
        print("a = %d\n", a);
    }
    for (b = 0; b < 2; b++) {
        print("a = %d\n", a++);
    }
    return 0;
}

// Solving
// a = 1
// a = 0
// a = -1
// a = 1