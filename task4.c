#include <memory.h>

void strcpy(char* dest, int len, const char* src)
{
	memset(dest, 0, len);
	char* curDst = dest;

	for (const char* curSrc = src;
		*curSrc && curDst - dest <= len - 1;
		++curSrc, ++curDst)
	{

		*curDst = *curSrc;
	}
}