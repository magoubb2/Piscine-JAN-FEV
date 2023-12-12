
#include <string.h>
#include <stdio.h>

// Used to find the first occurrence of a substring within another string.
// Iterates through the characters of the str string, examining each position 
// as a potential starting point for the substring(to_find). Then, compares 
// characters in haystack and needle while they match and the end of the substring 
// is not reached. Once the null terminating char of needle is reached we return (str).
char *ft_strstr(char *str, char *to_find)
{
    char *needle;
    char *haystack;

    while (*str)
    {
        needle = to_find;
        haystack = str;
        while (*haystack == *needle && *needle != '\0')
        {
            haystack++;
            needle++;
        }
        if (*needle == '\0')
            return (str);
        str++;
    }
    return (NULL);
}

int main() {
    // Test cases
    char haystack1[] = "Hello, World!";
    char needle1[] = "World";
    char *result1 = ft_strstr(haystack1, needle1);
    printf("Result 1: %s\n", result1 == NULL ? "Not found" : result1);

    char haystack2[] = "Hello, World!";
    char needle2[] = "Earth";
    char *result2 = ft_strstr(haystack2, needle2);
    printf("Result 2: %s\n", result2 == NULL ? "Not found" : result2);

    char haystack3[] = "Hello, World!";
    char needle3[] = "";
    char *result3 = ft_strstr(haystack3, needle3);
    printf("Result 3: %s\n", result3 == NULL ? "Not found" : result3);

    char haystack4[] = "";
    char needle4[] = "Hello";
    char *result4 = ft_strstr(haystack4, needle4);
    printf("Result 4: %s\n", result4 == NULL ? "Not found" : result4);

    return 0;
}
