#include <stdio.h>

int main() {
    int i, n, t1 = 0, t2 = 1, NextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printf("The Fibonacci Series: ");

    if (n == 1) {
        printf("%d\n", t1);
        return 0;
    }

    printf("%d, %d", t1, t2);

    NextTerm = t1 + t2;
    for (i = 3; i <= n; i++) {
        printf(", %d", NextTerm);
        t1 = t2;
        t2 = NextTerm;
        NextTerm = t1 + t2;
    }
    
    printf("\n");
    return 0;
}


