/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/23 12:28:50 by exam              #+#    #+#             */
/*   Updated: 2016/04/23 12:33:27 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put(char c)
{
	write(1, &c, 1);
}

void	ft_print_word(char *s, int start)
{
	int	i;

	i = start;
	while (s[i] != '\0' && s[i] != 32 && s[i] != '\t')
	{
		ft_put(s[i]);
		i++;
	}
	if (start != 0)
		ft_put(s[start - 1]);
}

int		main(int ac, char **av)
{
	int	len;

	len = 0;
	if (ac == 2)
	{
		while (av[1][len] != '\0')
			len++;
		len -= 1;
		while (len >= 0)
		{
			if (av[1][len] == 32 || av[1][len] == '\t')
				ft_print_word(av[1], len + 1);
			else if (len == 0)
				ft_print_word(av[1], 0);
			len--;
		}
	}
	ft_put('\n');
	return (0);
}
