/*
** EPITECH PROJECT, 2017
** printable
** File description:
** printable
*/

#include "my.h"

void    my_octal(unsigned int nb)
{
	char  *str = malloc(sizeof(char) * 3 + 1);;
	int   a = 0;

	while (nb > 0) {
		str[a] = '0' + nb % 8;
		nb = nb / 8;
		a++;
	}
	while (a < 3) {
		str[a] = '0';
		a++;
	}
	str[a] = '\0';
	my_revstr(str);
	my_putstr(str);
}

void	my_printable(char *str)
{
	int	a = 0;

	while (str[a]) {
		if (str[a] < 32 || str[a] >= 127) {
			my_putchar('\\');
			my_octal(str[a]);
		}
		else
			my_putchar(str[a]);
		a++;
	}
}
