#include <stdio.h>
#include <string.h>

int main (void)
{
	char	string1[100] = "this is my string and it should be easy to search through....";
	char	string2[100] = "search";

	printf("the result of strstr is: %s", strstr(string1, string2));

}
