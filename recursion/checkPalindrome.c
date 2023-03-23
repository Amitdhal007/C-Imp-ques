#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool checkpalindrome(char x[], int start, int end)
{

    // base case
    if (start > end)
    {
        return true;
    }

    if (x[start] != x[end])
    {
        return false;
    }
    else
    {
        // recursive function
        return checkpalindrome(x, start + 1, end - 1);
    }
}

int main()
{

    char x[] = "madam";
    int len = strlen(x);
    int start = 0;
    int end = len - 1;

    bool res = checkpalindrome(x, start, end);
    if (res)
    {
        printf("Its palindrome");
    }
    else
    {
        printf("Its not palindrome");
    }
    
    return 0;
}