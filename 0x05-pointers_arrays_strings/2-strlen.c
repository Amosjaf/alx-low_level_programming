int _strlen(char *s);

/**
 * _strlen - Function that returns the length of a string
 * @s: Pointer string that serves as a parameter for the function
 *
 * Description: Accepts a character string loops through the string
 * to give an integer output
 * Return: an interger for success
 */

int _strlen(char *s)
{
	int count;

	count = 0;
	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
