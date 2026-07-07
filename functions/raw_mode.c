#include "../header.h"

static struct termios	old;

void	ft_enable_raw_mode(void)
{
	struct termios	raw;

	fcntl(STDIN_FILENO, F_SETFL, O_NONBLOCK);
	tcgetattr(STDIN_FILENO, &old);
	raw = old;
	raw.c_lflag &= ~(ICANON | ECHO);
	tcsetattr(STDIN_FILENO, TCSAFLUSH, &raw);
}

void	ft_disable_raw_mode(void)
{
	tcsetattr(STDIN_FILENO, TCSAFLUSH, &old);
}