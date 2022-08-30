#include <stdio.h>
#include <bsd/string.h>

int main(void)
{
	char string1[100] = "This is my string im catting lolol";
	char string2[100] = "STICK THIS!";
	unsigned int i;
	unsigned int j;

	j = 0u;
	i = 0u;
	while (string1[i] != '\0')
	{
		i++;
	}
	while (string2[j] != '\0')
	{
		j++;
		i++;
	}
	i = 0;
	printf("Before\nstring1: %s\nstring2: %s\n", string1, string2);
	printf("i is %d, result of strlcat is: %ld\n", i, strlcat(string1, string2, i));
	printf("strlen of strlcat: %ld\n", strlen(string1));
	printf("After\nstring1: %s\nstring2: %s\n", string1, string2);
}
