#ifndef HEADER_H
# define HEADER_H
//******************************************************************************************************************************************************************
//    cool math game
//******************************************************************************************************************************************************************
void    ft_print_game_grid(int one, int two);
void	ft_play_cool_math_game(void);
void    ft_print_result(int result);
//******************************************************************************************************************************************************************
//    snake game
//******************************************************************************************************************************************************************
void    ft_play_snake(void);
void	ft_draw_board(int width, int height, int snake_x, int snake_y, int food_x, int food_y, char walls);
int     ft_random_position(int max);





void	ft_print_menu(void);
void	ft_print_commands(void);

void	ft_clear_screen(void);

void	ft_disable_raw_mode(void);
void	ft_enable_raw_mode(void);

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <termios.h>
#include <time.h>
#include <fcntl.h>

#endif