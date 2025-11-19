//compare two strings lexicographically and print which one is greater or lower or print both strings are same
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters from the strings
    str1[strcspn(str1, "\n")] = 0;
    str2[strcspn(str2, "\n")] = 0;

    int result = strcmp(str1, str2);
    if (result > 0) {
        printf("'%s' is greater than '%s'\n", str1, str2);
    } else if (result < 0) {
        printf("'%s' is less than '%s'\n", str1, str2);
    } else {
        printf("Both strings are same\n");
    }

    return 0;
}