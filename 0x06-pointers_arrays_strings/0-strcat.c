#include "main.h"

/**
 * _strcat - concatenates two strings. It overwrites the null byte character
 * of first string and then adds it after concatenation.
 * @dest: pointer to the first string
 * @src: pointer to the second string which will join the first string
 *
 * Return: pointer dest, which points to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	/* for loop and counting */
	int i;
	int m;
	int m;
	/* holding length of dest and src */
	int len_dest = 0;

	 for (i = 0; dest[i] != '\0'; i++)
	 {
		 len_dest++;
	 }
	 for (i = 0; src[i] != '\0'; i++)
	 {
		 len_src++;
	 }
	 m = 0;
	 for (i = len_dest; m < len_src; i++)
	 {
		 dest[i] = src[m];
		 m++;
	 }
	 dest[i] = '\0';
	 return (dest);
}
