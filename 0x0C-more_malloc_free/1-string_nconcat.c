#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: character limit of s2
 *
 * Return: pointer to new character
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1 = 0, len2 = 0, i = 0, j = 0;
char *s3;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0')
len2++;
if (n >= len2)
{
s3 = malloc(sizeof(char) * (len1 + len2 + 1));
if (s3 == NULL)
return (NULL);
}
else
{
s3 = malloc(sizeof(char) * (len1 + n + 1));
if (s3 == NULL)
return (NULL);
len2 = n;
}
while (i < len1)
{
s3[i] = s1[i];
i++;
}
while (j < len2)
{
s3[i + j] = s2[j];
j++;
}
s3[i + j] = '\0';
return (s3);
}
