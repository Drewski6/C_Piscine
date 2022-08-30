#include <bsd/string.h>
#include <stdio.h>

int main (void)
{
	char string1[] = "This is my string!!!";
	char string2[30] = "";
	int size;

	size = 0;
	while (string1[size] != '\0')
	{
		size++;
	}
	size++;
	printf("\nBefore: string1: %s, string2: %s\n", string1, string2);
	printf("size = %d: return value: %ld\n", size, strlcpy(string2, string1, size));
	printf("After: string1: %s, string2: %s\n", string1, string2);
}
