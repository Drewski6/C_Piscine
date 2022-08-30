#include <stdio.h>
#include <string.h>

int main (void)
{
	char	string1[] = "this is the first string|";
	char	string2[] = "this is the second string|";
	int		i;
	int		len;

	i = 0;
	len = -1;
	while (string2[i] != '\0')
	{
		i++;
		len++;
	}
	printf("before: \nstring1 %s\nstring2 %s\n\n", string1, string2);
	printf("i: %d\n\n", i);
	printf("result of strncat: %s\n\n", strncat(string1, string2, len));
	printf("after: \nstring1 %s\n, string2 %s\n\n", string1, string2);

}
