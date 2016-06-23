/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/08 14:11:39 by exam              #+#    #+#             */
/*   Updated: 2016/06/08 14:23:56 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put(char c)
{
	write(1, &c, 1);
}

void	ft_rot13(char	*rot_str)
{
	int		i;
	char	rot;

	i = 0;
	while (rot_str[i])
	{
		rot = rot_str[i];
		if (rot >= 97 && rot <= 122)
		{
			rot = rot_str[i] - 97;
			rot = ((rot + 13) % 26) + 97;
		}
		else if (rot >= 65 && rot <= 90)
		{
			rot = rot_str[i] - 65;
			rot = ((rot + 13) % 26) + 65;
		}
		ft_put(rot);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_rot13(av[1]);
	ft_put('\n');
	return (0);
}
