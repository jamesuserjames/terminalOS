#include "../header.h"

void	ft_clear_screen(void)
{
	write(1, "\033[2J\033[H", 7);
}

// #include <stdio.h>
// int main(void)
// {
//     ft_clear_screen();
//     return 0;
// }
