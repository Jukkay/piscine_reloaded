/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 12:28:11 by jylimaul          #+#    #+#             */
/*   Updated: 2021/10/29 14:18:59 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_count_range(int min, int max);

int	*ft_range(int min, int max)
{
	int	*arr;
	int	range;
	int	i;

	if (min >= max)
		return (0);
	range = ft_count_range(min, max);
	arr = malloc((range + 1) * sizeof(int));
	if (arr == 0)
		return (0);
	i = 0;
	while (min <= max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}

int	ft_count_range(int min, int max)
{
	int	range;

	if (min > max)
		return (0);
	if (min < 0 && max >= 0)
	{
		min *= -1;
		return (range = min + max + 1);
	}
	else if (min < 0 && max < 0)
	{
		min *= -1;
		max *= -1;
		return (range = min - max + 1);
	}
	else
		return (range = max - min + 1);
}
