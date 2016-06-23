/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julekgwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/21 10:50:00 by julekgwa          #+#    #+#             */
/*   Updated: 2016/06/21 10:50:09 by julekgwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	in_str(char *s, char c)
{
	int	i;
	
	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	char	alpha[27];
	int		i;
	int		j;
	int		c;

	alpha[0] = '\0';
	j = 0;
	c = 1;
	if (ac == 3)
	{
		while (av[c] && c <= 2)
		{
			i = 0;
			while (av[c][i])
			{
				if (in_str(av[1], av[c][i]) && in_str(av[2], av[c][i]) && !in_str(alpha, av[c][i]))
				{
					ft_putchar(av[c][i]);
					alpha[j] = av[c][i];
					j++;
					alpha[j] = '\0';
				}
				i++;
			}
			c++;
		}
	}
	ft_putchar('\n');
	return (0);
}
