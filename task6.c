#include <stdio.h>

_Bool insert(const char* src, const char* str, int index, char* dest, int len)
{
	unsigned int strLenght = strlen(str);
	unsigned int srcLen = strlen(src);

	if (((strLenght + srcLen) > len) || (index > srcLen)) { return 0; }
	char* point = dest;

	strcpy(point, index, src);			//Копируем первую часть строки в буффер
	point += index;

	strcpy(point, strLenght, str);		//Копируем подстроку в строку по индексу
	point += strLenght;

	strcpy(point, len, src + index);	//Копируем оставшуюся часть строки в буффер


}