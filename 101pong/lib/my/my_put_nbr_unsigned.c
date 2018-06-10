/*
** EPITECH PROJECT, 2017
** put_nbr_unsigned
** File description:
** put_nbr_unsigned
*/

#include "my.h"

void	my_put_nbr_unsigned(unsigned int nb)
{
	if (nb >= 10) {
		my_put_nbr(nb / 10);
		my_putchar(nb % 10 + '0');
	}
	if (nb < 10)
		my_putchar(nb % 10 + '0');
}
