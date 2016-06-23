/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/08 16:37:47 by exam              #+#    #+#             */
/*   Updated: 2016/06/08 17:16:48 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_pgcd(int num)
{
	int	i;
	int	big;

	i = 1;
	big = 0;
	while (i < num)
	{
		if (num % i == 0)
		{
			big = i;
		}
		i++;
	}
	return (big);
}

int	ft_big(int i, int j)
{
	if (i > j)
		return (i);
	else
		return (j);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;
	int big;

	if (ac == 3)
	{
		i = ft_pgcd(atoi(av[1]));
		j = ft_pgcd(atoi(av[2]));
		big = ft_big(atoi(av[1]), atoi(av[2]));
		if (i < j)
			printf("%d",  big % i);
		else
			printf("%d", big % j);

	}
	printf("\n");
	return (0);
}
