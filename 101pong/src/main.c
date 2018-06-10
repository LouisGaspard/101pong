/*
** EPITECH PROJECT, 2017
** 101pong
** File description:
** 101pong
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "my.h"

int	my_pong(char **av)
{
	int	n = atoi(av[7]);
	float	x0 = atof(av[1]);
	float	y0 = atof(av[2]);
	float	z0 = atof(av[3]);
	float	x1 = atof(av[4]);
	float	y1 = atof(av[5]);
	float	z1 = atof(av[6]);
	float	xx = x1 - x0;
	float	yy = y1 - y0;
	float	zz = z1 - z0;
	float	nx = x1 + xx * n;
	float	ny = y1 + yy * n;
	float	nz = z1 + zz * n;
	float	angle;

	if (n < 0)
		return (84);
	angle = (180 * acos(zz / (sqrt(pow(xx, 2) + pow(yy, 2) + pow(zz, 2)))) / M_PI) - 90;
	if (angle < 0)
		angle = angle * -1;
	printf("The speed vector coordinates are :\n(%.2f;%.2f;%.2f)\n", xx, yy, zz);
	printf("At time t+%d, ball coordinates will be :\n(%.2f;%.2f;%.2f)\n", n, nx, ny, nz);
	if (((-z1) / zz) >= 0 && nx != 0) {
		if (angle == 0)
			printf("The incidence angle is :\n0.00 degrees\n");
		else
			printf("The incidence angle is :\n%.2f degrees\n", angle);
	}
	else if (z0 == 0 && z1 == 0)
		printf("The incidence angle is :\n0.00 degrees\n");
	else
		printf("The ball won't reach the bat.\n");
	return (0);
}

int	verif_arg(char **av)
{
	int	a = 1;
	int	b = 0;

	while (av[a]) {
		if (av[a][0] == '-' && av[a][1] == '\0')
			return (84);
		if (my_str_isnum(av[a]) == 0)
			return (84);
		a++;
	}
	while (av[7][b]) {
		if (av[7][b] == '.')
			return (84);
		b++;
	}
	if (my_pong(av) == 84)
		return (84);
	return (0);
}

void	my_usage()
{
	printf("Usage: ./101pong x0 y0 z0 x1 y1 z1 n\n");
	printf("Avec: x0 y0 z0 les coordonnées a l'instant t-1\n");
	printf("x1 y1 z1 les coordonnées a l'instant t\n");
	printf("et n un entier positif.\n");
}

int	main(int ac, char **av)
{
	if (ac < 8) {
		my_usage();
		return (84);
	} else if (ac > 8) {
		printf("Le nombre d'argument ne peux pas être supérieur a 7.\n");
		return (84);
	} else
		if (verif_arg(av) == 84) {
			my_usage();
			return (84);
		}
	return (0);
}
