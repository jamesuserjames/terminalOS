#include "header.h"

int main(void)
{
    int     num;
    char    imput;
   
    ft_print_menu();
    scanf("%d", &num);
    if (num == 1)
    {
        ft_enable_raw_mode();
        while (1)
        {
            read(1, &imput, 1);
            
        }
    }
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