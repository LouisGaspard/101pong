/*
** EPITECH PROJECT, 2017
** strcat
** File description:
** strcat
*/

#include "my.h"

char	*my_strcat(char *dest, char const *src)
{
	int	len = my_strlen(dest);
	int	a = -1;

	while (src[++a])
		dest[len + a] = src[a];
	dest[len + a] = '\0';
	return (dest);
}
