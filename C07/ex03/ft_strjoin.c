
#include <stdio.h>
#include <stdlib.h>

// Step 1). We use ft_strlen to find the length of the (strs), so we calculate the
// length of each string in (**strs).
// Step 2). Then we had to the length, the length of the (sep) times the number of
// string in the (**strs) array of string.
// Step 3). We then initialise a new variable  called  result to which we allocate
// the length of each string in (strs) + the (sep) times the number of string  + 1
// for the ('\0') the NULL terminating character.
// Step 4). We do the malloc check + we insure that result is empty and full  of 0
// so we can avoid garbages value...
// Step 5). We finially concatenate (strs) to (result) + add the (sep) in  between
// each words by concatening (sep) to (result).
// Step 6). And we return (result).
char *ft_strjoin(int size, char **strs, char *sep);

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return(i);
}

void ft_memcpy (char *dest, char *src, unsigned int num)
{
	int i;

	i = 0;
	while (i < num)
	{
		dest[i] = src[i];
		i++;
	}
}

char *ft_strcat(char *dest, char *src)
{
	unsigned int dest_len;
	unsigned int src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);

	ft_memcpy(dest + dest_len, src, src_len + 1);
	return (dest);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    int i;
    int len;
    char *result;

    i = 0;
    len = 0;
    while (i < size)
        len = len + ft_strlen(strs[i++]);
    if (size <= 0)
        len = 0;
    else
        len = len + ft_strlen(sep) * (size - 1);
    result = (char *)malloc(sizeof (char) * (len + 1));
    if (!result)
        return (NULL);
    *result = '\0';
    i = 0;
    while (i < size)
    {
        ft_strcat(result, strs[i]);
        if (i < (size - 1))
            ft_strcat(result, sep);
        i++;
    }
    return (result);
}

int main(void)
{
    char *strs[] = {
        "hello",
        "marguerite",
        "!"
    };
    const char* result = ft_strjoin(3, strs, " >< ");
    printf("%s\n", result);
}