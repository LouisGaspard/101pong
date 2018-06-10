/*
** EPITECH PROJECT, 2017
** my_print_pointer
** File description:
** my_print_pointer
*/

#include "my.h"

void	my_print_pointer(int nb)
{
	my_putstr("0x");
	my_pointer(nb);
}

void	my_pointer(int nb)
{
	char	*base = "0123456789abcdef";
	int	len = my_strlen(base);

	if (nb < 0) {
		nb = -nb;
		my_putchar('-');
	}
	if (nb == 0) {
		my_put_nbr(0);
		return ;
	}
	else
		my_pointer(nb / len);
	my_putchar(base[nb % len]);
}
