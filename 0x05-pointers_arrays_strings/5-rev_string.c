#include "main.h"
/**
<<<<<<< HEAD
 * rev_string - revesre a given string
 * @s: contains string
 * Returns: Always 0.
 */
void rev_string(char *s)
{
	int i;
	char ch[];

	for(i = 10; i >= 0; i--)
	{
		ch[] += s[i];
	}
	s[10] = ch[];
=======
 * rev_string - reverses a string.
 * @s: input string.
 * Return: no return.
 */
void rev_string(char *s)
{
	int count = 0, i, j;
	char *str, temp;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}
	str = s;

	for (i = 0; i < (count - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = temp;
		}
	}
>>>>>>> 656e98c6c1204d6119ca87cf95106ab51979b182
}
