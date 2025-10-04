#include<stdio.h>

int main() {
    int a = 5, b =5;
    a *= 3 + b++;
    printf("%d, %d", a, b);
    return 0;
}


// Solving
// a = a * (3 + b++) => 5 * (3 + 5) = 40