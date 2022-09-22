/**
 * *_strcpy - copies the string pointed to by char src to the buffer
 * pointed to by char dest
 *
 * @src: pointer to char src
 * @dest: pointer to integer dest
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len;

	len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}

	*(dest + len) = '\0';

	return (dest);
}
