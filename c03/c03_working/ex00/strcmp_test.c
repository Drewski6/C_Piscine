#include <bsd/string.h>
#include <stdio.h>

int main (void)
{
	char	string1[] = "This is my string! lol";
	char	string2[] = "This is my string! lol";

	printf("result of strcmp is %d\n", strcmp(string1, string2));
}
