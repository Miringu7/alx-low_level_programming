/**
  * _strcpy - copy string from source to dest
  * @dest: destination string
  * @src: source
  * Return: destination
  */

char *_strcpy(char *dest, char *src)
{
	int count = 1, i;

	while (*src)
		count++;
	for (i = 0; i < count; i++)
		dest[i] = src[i];
	return (dest);
}
