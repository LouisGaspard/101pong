/*
** EPITECH PROJECT, 2017
** my_put_nb_binary
** File description:
** my_put_nb_binary
*/

#include "my.h"

void	my_put_nbr_binary(int nb)
{
	char	*base = "01";
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
		my_put_nbr_binary(nb / len);
	my_putchar(base[nb % len]);
}
