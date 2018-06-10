/*
** EPITECH PROJECT, 2017
** my_put_octal
** File description:
** my_put_octal
*/

#include "my.h"

void	my_put_nbr_hexa(int nb)
{
	char	*base = "0123456789abcdef";
	int	len = my_strlen(base);

	if (nb < 0) {
		nb = -nb;
		my_putchar('-');
	}
	if (nb == 0)
		return ;
	else
		my_put_nbr_hexa(nb / len);
	my_putchar(base[nb % len]);
}
