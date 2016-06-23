#include	<unistd.h>

void	ft_countdown(void)
{
	char    initial;
	char    end;
	char    new_line;
	new_line = '\n';
	initial = '9';
	end = '0';
	while (initial >= end)
	{
		write(1, &initial, 1);
		initial--;
	}
	write(1, &new_line, 1);
}

