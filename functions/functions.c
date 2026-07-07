#include "../header.h"

void	ft_clear_screen(void)
{
	write(1, "\033[2J\033[H", 7);
}

int    ft_update_food(int food, int width, int height)
{
    food = (rand() % (width - 2)) + 1;
    return (food);
}
int	   ft_random_position(int max)
{
	return ((rand() % (max - 2)) + 1);
}

