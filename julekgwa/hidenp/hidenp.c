/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/15 17:04:36 by exam              #+#    #+#             */
/*   Updated: 2016/04/15 17:15:47 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_search(char *s1, char *s2, int len)
{
	int	i;
	int	j;
	int	pos;
	int	found;

	i = 0;
	j = 0;
	pos = 0;
	found = 0;
	while (s1[i] != '\0' && (found != len))
	{
		j = i;
		if (pos != 0)
			j = pos;
		while (s2[j] != '\0')
		{
			if (s1[i] == s2[j])
			{
				pos = j;
				found++;
			}
			j++;
		}
		i++;
	}
	return (found);
}
	

int	ft_hidden(char *s1, char *s2)
{
	int	i;
	int	pos;
	int	j;
	int	s1_len;
	int	found;

	i = 0;
	pos = 0;
	j = 0;
	s1_len = 0;
	found = 0;
	while (s1[s1_len] != '\0')
		s1_len++;
	found = ft_search(s1, s2, s1_len);
	if (found == s1_len)
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	int	found;

	found = 0;
	if (argc < 3)
		write(1, "\n", 1);
	else
	{
		found = ft_hidden(argv[1], argv[2]);
		if (found == 1)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		write(1, "\n", 1);
	}
	return (0);
}
