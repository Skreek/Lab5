#include <stdio.h>

char* find(const char* str, const char* substr)
{
	unsigned int i = 0;
	unsigned int j, k;

	while (str[i] != 0)
	{
		for (j = i, k = 0; substr[k] != 0 && str[j] == substr[k]; j++, k++)
		{
			if (substr[k + 1] == 0)
			{
				return (str + i);
			}
		}
		++i;
	}
	return 0;
}