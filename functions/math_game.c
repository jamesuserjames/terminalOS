#include "../header.h"

void    ft_print_game_grid()
{
    write(1,
	"╔══════════════════════════════════════╗\n"
	"║            COOL MATH GAME:           ║\n"
	"╠══════════════════════════════════════╣\n"
	"║   OPTIONS:                           ║\n"
	"║______________________________________║\n"
	"║   1. (play cool math game)           ║\n"
	"║   2. (use calculator)                ║\n"
	"║   3. (see commands)                  ║\n"
	"║                                      ║\n"
	"╚══════════════════════════════════════╝\n",
	679);
}