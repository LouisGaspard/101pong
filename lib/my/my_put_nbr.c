/*
** EPITECH PROJECT, 2017
** my_put_nbr
** File description:
** task07
*/

#include "my.h"

void	my_put_nbr(int	nb)
{
	int	neg = 0;

	if (nb < 0) {
		my_putchar('-');
		if (nb == -2147483648) {
			neg = 1;
			nb++;
		}
		nb = - nb;
	}
	if (nb >= 10)
		my_put_nbr(nb / 10);
	if (neg == 1)
		my_putchar((nb % 10) + 49);
	else
		my_putchar((nb % 10) + 48);
}
