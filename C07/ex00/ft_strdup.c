
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// This function is used to duplicate a string.
// Step 1). We use ft_strlen to find the size of the (src) string.
// Step 2). We use malloc to allocate  that  size  to  the  (copy) 
//string which is the string duplicate.
// Step 3). Then we check if the allocation has failed if  it  has
// we return (NULL)
// Step 4). If it succed, we copy (src) to (copy) and then we  had
// the '\0' at the end of (copy) to specifie that we have finished
// and we return (copy).
// (The malloc is cast to (char *) so that it match  the  type  of
// copy)
// about this part: (sizeof(char) * (len + 1))
// This expression calculates the total size (in  bytes)  required 
// to store the duplicated string,  including  both the characters 
// and the null terminator.  
int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char *ft_strdup(char *src)
{
    char *copy;
    int len;
    int i;

    i = 0;
    len = ft_strlen(src);
    copy = (char*)malloc(sizeof(char) * (len + 1));
    if (!copy)
        return (NULL);
    while (src[i])
    {
        copy[i] = src[i];
        i++;
    }
    copy[i] = '\0';
    return (copy);
}

int main(void)
{
    char src[] = "HELLO WORLD HELLO";

    printf("%s\n", ft_strdup(src));
    printf("%s\n", strdup(src));
}