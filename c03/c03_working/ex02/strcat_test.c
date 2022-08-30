#include <stdio.h>
#include <string.h>

int main (void)
{
	char string1[100] = "This is the starting string END";
	char string2[100] = "Here is the second string END";

	printf("Before: string1 %s, string2 %s\n", string1, string2);
	printf("return of strcat: %s\n", strcat(string1, string2));
	printf("After: string1 %s, string2 %s\n", string1, string2);


}
