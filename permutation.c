#include <stdio.h>
#include <string.h>

void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

void generate_permutations(char *string, int start, int end) {
    // Base case: if start is equal to end, print the permutation
    if (start == end) {
        printf("%s\n", string);
    } else {
        // Recursive case: generate permutations of all substrings
        for (int i = start; i <= end; i++) {
            // Swap the i-th character with the start character
            swap(&string[start], &string[i]);

            // Generate all permutations of the remaining characters
            generate_permutations(string, start+1, end);

            // Swap back the characters to restore the original string
            swap(&string[start], &string[i]);
        }
    }
}

int main() {
    char string[] = "abcd";
    int length = strlen(string);

    // Generate all permutations of the string
    generate_permutations(string, 0, length-1);

    return 0;
}
