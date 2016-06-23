/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/02 10:27:49 by exam              #+#    #+#             */
/*   Updated: 2016/02/02 10:28:18 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char	*init_ptr(void)
{
	char	*ptr;
	int		i;

	ptr = (char *)malloc(sizeof(char) * 2050);
	i = 0;
	while (i < 2050)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}

void	parse_brainfuck(char *str)
{
	char	*ptr;
	int		i;
	int		loop;

	ptr = init_ptr();
	i = 0;
	while (str[i])
	{
		if (str[i] == '>')
			ptr++;
		else if (str[i] == '<')
			ptr--;
		else if (str[i] == '+')
			(*ptr)++;
		else if (str[i] == '-')
			(*ptr)--;
		else if (str[i] == '.')
			write(1, ptr, 1);
		else if (str[i] == '[')
		{
			if (*ptr == 0)
			{
				loop = 0;
				while (str[i])
				{
					if (str[i] == '[')
						loop++;
					if (str[i] == ']')
						loop--;
					if (loop == 0)
						break ;
					i++;
				}
			}
		}
		else if (str[i] == ']')
		{
			if (*ptr != 0)
			{
				loop = 0;
				while (str[i])
				{
					if (str[i] == ']')
						loop++;
					if (str[i] == '[')
						loop--;
					if (loop == 0)
						break ;
					i--;
				}
			}
		}
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
		parse_brainfuck(av[1]);
	else
		write(1, "\n", 1);
	return (0);
}
