/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julekgwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/20 16:32:46 by julekgwa          #+#    #+#             */
/*   Updated: 2016/06/20 16:33:07 by julekgwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
	{
		ft_putchar(n + '0');
	}
}

int	main(int ac, char **av)
{
	int	count;

	count = 0;
	if (ac > 1)
	{
		av++;
		while (*av)
		{
			count++;
			av++;
		}
		ft_putnbr(count);
	}
	else
	{
		ft_putchar('0');
	}
	ft_putchar('\n');
	return (0);
}
