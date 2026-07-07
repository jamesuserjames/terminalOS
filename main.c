#include "header.h"

int main(void)
{
    int     num;
    char    imput;
   
    ft_print_menu();
    scanf("%d", &num);
    ft_clear_screen();
    if (num == 1)
        ft_play_cool_math_game();
    else if (num == 3)
    {
        ft_print_commands();
    }
    return 0;
}


/*
ft_enable_raw_mode();
*/






/*
╔══════════════════════════════════════╗
║              TERMINAL OS             ║
╠══════════════════════════════════════╣
║                                      ║
║  ▶ Snake                             ║
║    Calculator                        ║
║    Notes                             ║
║    Clock                             ║
║    Git Tools                         ║
║    Settings                          ║
║    Exit                              ║
║                                      ║
╚══════════════════════════════════════╝


*/