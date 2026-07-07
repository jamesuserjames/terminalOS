#include "../header.h"

void    ft_print_game_grid(int one, int two)
{
	char    x;
    char    y;

	x = one + '0';
    y = two + '0';
    write(1,
	"╔══════════════════════════════════════╗\n"
	"║            COOL MATH GAME:           ║\n"
	"╠══════════════════════════════════════╣\n"
	,288);
	write(1, "║ ???            " ,20);
	write(1, &x, 1);
    write(1, " X ", 4);
    write(1, &y, 1);
	write(1, "             ??? ║\n", 22);
	write(1,
	"║______________________________________║\n"
	"╚══════════════════════════════════════╝\n"
	,167);
}

void	ft_play_cool_math_game(void)
{
    int     answer;
    int     one;
    int     two;

    srand(time(NULL));
	while (1)
	{
		one = rand() % 9;
		two = rand() % 9;
		ft_print_game_grid(one, two);
		scanf("%d", &answer);
		if (answer == one * two)
			write(1, "corect", 6);
		else
		{
			write(1, "false", 5);
		}
		sleep(1);
		ft_clear_screen();
	}
}