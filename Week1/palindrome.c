#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char s[]) {
    int n = strlen(s);
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    char s[100];
    printf("Enter the word you want to check if it's a palindrome: ");\
    scanf("%s", s);

    if (isPalindrome(s)) {
        printf("%s is a palindrome\n", s);
    } else {
        printf("%s is not a palindrome\n", s);
    }
    return 0;
}
