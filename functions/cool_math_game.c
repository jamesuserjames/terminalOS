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

void    ft_print_result(int result)
{
	if (result == 1)
	{
		write(1,
		"╔══════════════════════════════════════╗\n"
		"║                CORRECT               ║\n"
		"╠══════════════════════════════════════╣\n"
		,288);
	}
	else if (result == 0)
	{
		write(1,
		"╔══════════════════════════════════════╗\n"
		"║                 FAIL                 ║\n"
		"╠══════════════════════════════════════╣\n"
		,288);
	}
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
		ft_clear_screen();
		ft_print_game_grid(one, two);
		scanf("%d", &answer);
		ft_clear_screen();
		if (answer == one * two)
			ft_print_result(1);
		else
			ft_print_result(0);
		sleep(1);
	}
}
