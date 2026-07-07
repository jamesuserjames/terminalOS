#include "../header.h"

void	ft_draw_board(int width, int height, int snake_x, int snake_y, int food_x, int food_y, char walls)
{
	int		i;
	int		j;

	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			if ((i == 0 || i == height - 1) || (j == 0 || j == width - 1))
				write(1, &walls, 1);
			else if (j == snake_x && i == snake_y)
				write(1, "o", 1);
			else if (j == food_x && i == food_y)
				write(1, "*", 1);
			else
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

// void	ft_draw_snake(int snake_x, int snake_y, int size)
// {
// 	int 	i;

// 	i = 0;
// 	while (i <= size)
// 	{
// 		if (size == size - 1)
// 			write(1, '0', 1);
// 		write(1, 'o', 1);
// 		i++;
// 	}
// }

// int main(void)
// {
// 	ft_draw_board(5, 5, '#');
// 	return 0;
// }


/*
snake idea:
__________o

----------o

__________0

----------0
*/