/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/23 10:45:22 by exam              #+#    #+#             */
/*   Updated: 2016/04/23 10:45:26 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi_base(const char *str, int str_base)
{
	int		i;
	int		res;
	char	b;

	i = 0;
	while (str[i] != 0)
	{
		if (str_base > 10)
		{
			b = str[i];
			if (b == 'A' || b == 'a')
				res = (res * 10) + 11;
			else if (b == 'B' || b == 'b')
				res = (res * 10) + 12;
			else if (b == 'C' || b == 'c')
				res = (res * 10) + 13;
			else if (b == 'D' || b == 'd')
				res = (res * 10) + 14;
			else if (b == 'E' || b == 'e')
				res = (res * 10) + 15;
			else if (b == 'F' || b == 'f')
				res = (res * 10) + 16;
			else
				res = (res * 10) + str[i] - '0';
		}
		else
			res = (res * 10) + str[i] - '0';
		i++;
	}
	return (res);
}
