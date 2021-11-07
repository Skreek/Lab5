#include <memory.h>

void delete(char* str, const char* substr)
{
	int substrlen = strlen(substr);
	char* point = find(str, substr);

	while (*(point + substrlen))
	{
		*(point) = *(point + substrlen);
		++point;
	}
	memset(point, 0, substrlen);
}