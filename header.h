#ifndef HEADER_H
# define HEADER_H

void	ft_print_menu(void);
void	ft_print_commands(void);
//******************************************************************************************************************************************************************
//    cool math game
//******************************************************************************************************************************************************************
void    ft_print_game_grid(int one, int two);
void	ft_play_cool_math_game(void);

void	ft_draw_board(int width, int height, int snake_x, int snake_y, int food_x, int food_y, char walls);
void	ft_draw_snake(char *snake);

void	ft_clear_screen(void);

void	ft_disable_raw_mode(void);
void	ft_enable_raw_mode(void);

int    ft_update_food(int food, int width, int height);
int	   ft_random_position(int max);

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <termios.h>
#include <time.h>

#endif