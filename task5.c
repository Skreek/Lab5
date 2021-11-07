void strcat(char* dest, int len, const char* first, const char* second)
{
	strcpy(dest, len, first);
	unsigned int firstLen = strlen(first);
	unsigned int secondLen = strlen(second);
	strcpy(dest + firstLen, secondLen, second);

}