/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/08 15:48:53 by exam              #+#    #+#             */
/*   Updated: 2016/06/08 15:52:21 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_do_op(int num, int num2, char op)
{
	int	cal;

	cal = 0;
	if (op == '+')
		cal = num + num2;
	else if (op == '/')
		cal = num / num2;
	else if (op == '*')
		cal = num * num2;
	else if (op == '-')
		cal = num - num2;
	else if (op == '%')
		cal = num % num2;
	printf("%d", cal);
}

int		main(int ac, char **av)
{
	if (ac == 4)
		ft_do_op(atoi(av[1]), atoi(av[3]), av[2][0]);
	printf("\n");
	return (0);
}
