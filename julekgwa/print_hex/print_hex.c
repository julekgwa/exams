/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julekgwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/14 14:47:29 by julekgwa          #+#    #+#             */
/*   Updated: 2016/06/14 14:47:55 by julekgwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *s)
{
	int	sign;
	int	result;

	result = 0;
	sign = 1;
	while (*s == '\t' || *s =='\v' || *s == '\f' || *s == '\n' || *s == ' ' || *s == '\r')
		s++;
	if (*s == '-')
		sign = -1;
	if (*s == '-' || *s == '+')
		s++;
	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + *s - '0';
		s++;
	}
	return (sign * result);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
}

char	*print_hex(int num)
{
	static char represent[] = "0123456789abcdef";
	static char buffer[50];
	char	*ptr;

	ptr = &buffer[49];
	*ptr = '\0';
	while (num != 0)
	{
		*--ptr = represent[num % 16];
		num /= 16;
	}
	return (ptr);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_putstr(print_hex(ft_atoi(av[1])));
	ft_putchar('\n');
	return (0);
}
