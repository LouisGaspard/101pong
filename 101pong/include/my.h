/*
** EPITECH PROJECT, 2017
** my
** File description:
** my
*/

#ifndef __MY_H_
#define __MY_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int	my_compute_power_rec(int nb, int p);
int	my_compute_square_root(int nb);
int	my_find_prime_sup(int nb);
int	my_getnbr(char const *str);
int	my_isneg(int n);
int	my_is_prime(int nb);
void	my_put_nbr(int  nb);
void	my_putstr(char *str);
char	*my_revstr(char *str);
int	my_showmem(char const *str, int size);
int	my_showstr(char const *str);
void	my_sort_int_tab(int *array, int size);
char	*my_strcapitalize(char *str);
char	*my_strcat(char *dest, char const *src);
int	my_strcmp(char const *s1, char const *s2);
char	*my_strcpy(char *dest, char const *src);
int	my_str_isalpha(char const *str);
int	my_str_islower(char const *str);
int	my_str_isnum(char const *str);
int	my_str_isprintable(char const *str);
int	my_str_isupper(char const *str);
int	my_strlen(char const *str);
char	*my_strlowcase(char *str);
char	*my_strncat(char *dest, char const *src, int nb);
int	my_strncmp(char const *s1, char const *s2, int n);
char	*my_strncpy(char *dest, char const *src, int n);
char	*my_strstr(char *str, char const *to_find);
char	*my_strupcase(char *str);
void	my_swap(int *a, int *b);
char	*concat_params(int ac, char **av);
char	**my_str_to_word_array(char const *str);
int	my_show_word_array(char * const *tab);
char	*my_strdup(char const *str);
void	infin_sub(char *val1, char *val2);
void	infin_add(char *val1, char *val2);
void	my_infin_sub_add(char *val1, char *val2, char *str1, char *str2);
char	my_add(char, char, int, int);
int	count_word_len(char const *str);
int	my_is_alphanum(char c);
void	my_put_nbr_octal(int nb);
void	my_put_nbr_hexa(int nb);
void	my_put_nbr_hexa_cap(int nb);
void	my_put_nbr_binary(int nb);
void	my_put_nbr_binary(int nb);
void	my_put_nbr_unsigned(unsigned int nb);
void	my_printable(char *str);
void	my_print_pointer(int nb);
void	my_pointer(int nb);
void	my_putchar(char c);

#endif
