//main.c

#include "head.h"

int		main(int ac, char **av)
{
	char error[] = "Use: pyramid.exe SIZE";
	int i;

	if (ac == 2)
		pyramid(ft_atoi(av[1]));
	else
	{
		i = 0;
		while (error[i] != '\0')
		{
			ft_putchar(error[i]);
			i++;
		}
	}
	return (0);
}
