//sastantua.c

#include "head.h"

int calc_width(int i)
{
	int width;

	if(i == 0)
		return (7);
	width = calc_width(i - 1) + 2 * (1 + (3 + i) + ((i % 2) + (i / 2)));
	return (width);
}

void	print_line(int height, int width, int count_space)
{
	int i;
	int j;

	i = 0;
	while (i < height)
	{
		j = -count_space;
		while (j < height - 1 - i)
		{
			ft_putchar(' ');
			j++;
		}
		j += height + 1 - i;
		ft_putchar('/');
		while (j < width)
		{
			ft_putchar('*');
			j++;
		}
		ft_putchar('\\');
		ft_putchar('\n');
		i++;
	}

}

void	print_end(int height, int width, int count_space, int size)
{
	int i;
	int j;
	int k;

	i = 0;
	while (i < height - size)
	{
		j = -count_space;
		while (j < height - 1 - i)
		{
			ft_putchar(' ');
			j++;
		}
		j += height + 1 - i;
		ft_putchar('/');
		while (j < width)
		{
			ft_putchar('*');
			j++;
		}
		ft_putchar('\\');
		ft_putchar('\n');
		i++;
	}

	k = 0;
	while (k < size)
	{
		i = 0;
		j = -count_space;
		while (j < size - 1 - k)
		{
			ft_putchar(' ');
			j++;
		}
		j += size + 1 - k;
		ft_putchar('/');
		while (j < ((width / 2) + size - k - (size / 2)))
		{
			ft_putchar('*');
			j++;
		}
		while (i < size)
		{
			if (size >= 5 && k == (size / 2) && i == size - 2)
				ft_putchar('$');
			else
				ft_putchar('|');
			i++;
		}
		while (j < width - size)
		{
			ft_putchar('*');
			j++;
		}
		ft_putchar('\\');
		ft_putchar('\n');
		k++;
	}
}

void	pyramid(int size)
{
	if (size > 0)
	{
		int i;
		int height;
		int width;
		int count_space;

		i = 0;
		while (i < size)
		{
			count_space = (calc_width(size - 1) - calc_width(i)) / 2;
			height = 3 + i;
			width = calc_width(i);
			if (i == size - 1)
			{
				print_end(height, width, count_space, size);
				i++;
			}
			else
			{
				print_line(height, width, count_space);
				i++;
			}
		}
	}
}
