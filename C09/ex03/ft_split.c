/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: margueritebaronbeliveau <margueritebaro    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 10:03:41 by margueriteb       #+#    #+#             */
/*   Updated: 2024/01/31 10:11:05 by margueriteb      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int w_count(char *str, char c)
{
    int i;
    int words;

    i = 0;
    words = 0;
    while (str[i])
    {
        while (str[i] == c)
            i++;
        if (str[i] != '\0')
            words++;
        while (str[i] && (str[i] != c))
            i++;
    }
    return (words);
}

int w_len(char *str, char c, int i)
{
    int len;

    len = 0;
    while (str[i] != c && str[i] != '\0')
    {
        i++;
        len++;
    }
    return (len);
}

char	*ft_substr(char *str, int start, int len)
{
	int	i;
	char	*nstr;

	i = 0;
	if (ft_strlen(str) < len)
		len = ft_strlen(str);
	nstr = malloc(sizeof(char) * len + 1);
	if (nstr == NULL)
		return (0);
	if (!str)
		return (NULL);
	if (start > ft_strlen(str))
		start = ft_strlen(str);
    while (i < len && str[start + i])
	{
		nstr[i] = str[start + i];
		i++;
	}
	nstr[i] = '\0';
	return (nstr);
}

char **ft_split(char *str, char *charset)
{
    int i;
    int index;
    char **split;
    int sub_str_len;

    i = 0;
    index = 0;
    if (!str)
        return (NULL);
    split = (char **)malloc(sizeof(char *) * (w_count(str, *charset) + 1));
    if (!split)
        return (NULL);
    while (i < ft_strlen(str))
    {
        if ((i == 0 && str[i] != *charset) 
            || (str[i] != *charset && str[i - 1] == *charset))
        {
            sub_str_len = w_len(str, *charset, i);
            split[index] = ft_substr(str, i, sub_str_len);
            index++;
        }
        i++;
    }
    split[index] = NULL;
    return (split); 
}

int	main(void)
{
	char	**split = ft_split("lol lmao mdr ptdr", " ");
	int i = 0;
	while (split[i])
	{
		printf("%s\n", split[i]);
		i++;
	}
}