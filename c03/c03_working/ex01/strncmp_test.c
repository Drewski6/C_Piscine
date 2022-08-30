#include <stdio.h>
#include <string.h>

int main (void)
{
	char string1[] = "this";
	char string2[] = "this is my string";
	int i;

	i = 0;
	while (string1[i] != '\0')
		i++;
	printf("i prior to strncmp is %d\n", i);
	printf("result of strncmp is %d\n", strncmp(string1, string2, 4));
}
