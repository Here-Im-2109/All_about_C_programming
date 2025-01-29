//    Purpose:  To check if a given string is a palindrome or not.
#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return 0;  // Not a palindrome
        }
        left++;
        right--;
    }
    return 1;  // Palindrome
}

int main() {
    char str[100];

    printf("Enter a word: ");
    scanf("%s", str);

    if (isPalindrome(str)) {
        printf("%s is a Palindrome\n", str);
    } else {
        printf("%s is not a Palindrome\n", str);
    }

    return 0;
}