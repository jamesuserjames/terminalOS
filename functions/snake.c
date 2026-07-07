#include "../header.h"
int	   ft_random_position(int max)
{
	return ((rand() % (max - 2)) + 1);
}

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

int     ft_snakes_direction(char *input, int direction)
{
    if (input[0] == 27 && input[1] == '[' && input[2] == 'A')
        direction = 1;
    else if (input[0] == 27 && input[1] == '[' && input[2] == 'B')
        direction = 2;
    else if (input[0] == 27 && input[1] == '[' && input[2] == 'D')
        direction = 3;
    else if (input[0] == 27 && input[1] == '[' && input[2] == 'C')
        direction = 4;
    return (direction);
}

void    ft_play_snake(void)
{
    int     snake_x = 1;
    int     snake_y = 1;
    int     food_x = 10;
    int     food_y = 5;
    int     width = 80;
    int     height = 12;
    int     snake = 1;
    char    input[3];
    int     direction = 4;
    int     bytes;

    ft_enable_raw_mode();
    while (1)
    {
        bytes = read(0, input, 3);
        if (bytes == 3)
            direction = ft_snakes_direction(input, direction);
		if (direction == 1)
			snake_y--;
		else if (direction == 2)
			snake_y++;
		else if (direction == 3)
			snake_x--;
		else if (direction == 4)
			snake_x++;

        if (snake_x == food_x && snake_y == food_y)
        {
            food_x = ft_random_position(width);
            food_y = ft_random_position(height);
        }

        
        ft_clear_screen();
        ft_draw_board(width, height, snake_x, snake_y, food_x, food_y, '#');
        usleep(150000);
    }
    ft_disable_raw_mode();
}
