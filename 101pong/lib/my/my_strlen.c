/*
** EPITECH PROJECT, 2017
** my_strlen
** File description:
** task03
*/

int	my_strlen(char const *str)
{
	int	size = 0;

	while (str[size])
		size++;
	return (size);
}
