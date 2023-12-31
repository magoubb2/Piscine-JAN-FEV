
// Loop by checking char by char until the char are not equal.
// If the char are not equal the difference between the two char
// is returned(in ascii).
// Exemple if the char in s1 is 'l' in ascii->(108) and s2 is 7
// in ascii->(55) then the difference is '53'.
// If s1 and s2 are identicall until the '\0' is reached,
// we return (0);
int ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}