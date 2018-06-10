/*
** EPITECH PROJECT, 2017
** my_printf
** File description:
** my_printf
*/

#include "my.h"

void	init_tab_fonct(void (**tab_fonct)())
{
	tab_fonct[0] = my_putstr;
	tab_fonct[1] = my_put_nbr;
	tab_fonct[2] = my_put_nbr;
	tab_fonct[3] = my_put_nbr_octal;
	tab_fonct[4] = my_put_nbr_hexa;
	tab_fonct[5] = my_put_nbr_hexa_cap;
	tab_fonct[6] = my_put_nbr_unsigned;
	tab_fonct[7] = my_printable;
	tab_fonct[8] = my_print_pointer;
	tab_fonct[9] = my_put_nbr_binary;
}

int	check_format(char format, va_list arg)
{
	char	*flags = "sdioxXuSpb";
	int	a = 0;

	if (format == '%')
		my_putchar('%');
	if (format == 'c') {
		my_putchar((char) va_arg(arg, int));
		return (-1);
	}
	while (format != flags[a])
		a++;
	return (a);
}

int	my_printf(const char *format, ...)
{
	va_list	arg;
	int	nb_format = - 1;
	void	(*tab_fonct[11])();
	int	a = 0;

	va_start(arg, format);
	init_tab_fonct(tab_fonct);
	while (format[a]) {
		if (format[a] == '%') {
			nb_format = check_format(format[a + 1], arg);
			a++;
		}
		if (nb_format != - 1)
			(*tab_fonct[nb_format])(va_arg(arg, void *));
		else
			my_putchar(format[a]);
		a++;
	}
	va_end(arg);
	return (0);
}
