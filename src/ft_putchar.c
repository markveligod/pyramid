//ft_putchar.c

#include "head.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}