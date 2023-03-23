#include <stdio.h>
#include <string.h>

void reverseWords(char str[])
{
    int start = 0;
    int len = strlen(str);

    // Reverse the entire string
    for (int i = 0; i < len / 2; i++)
    {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }

    // Reverse each word in the string
    for (int i = 0; i <= len; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            int end = i - 1;
            while (start < end)
            {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }
            start = i + 1;
        }
    }
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Replace newline character with null character
    str[strcspn(str, "\n")] = '\0';

    reverseWords(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
