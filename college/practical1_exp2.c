#include <stdio.h>

void main() {
    int a, b, c, largest;
    printf("Enter 3 nos: ");
    scanf("%d%d%d", &a, &b, &c);
    largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("Largest is: %d\n", largest);
}