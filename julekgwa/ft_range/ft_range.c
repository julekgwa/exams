/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julekgwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/14 16:05:18 by julekgwa          #+#    #+#             */
/*   Updated: 2016/06/14 16:05:20 by julekgwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	*range;
	int	i;
	int	len;

	if (start < end)
		len = end -  start + 1;
	else
		len = start - end + 1;
	range = (int *)malloc(sizeof(int) * len);
	i = 0;
	if (range)
	{
		if (start < end)
		{
			while (start <= end)
			{
				range[i] = start;
				start++;
				i++;
			}
		}
		else
		{
			while (start >= end)
			{
				range[i] = start;
				start--;
				i++;
			}
		}
	}
	return (range);
}
