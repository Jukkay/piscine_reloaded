/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 10:46:18 by jylimaul          #+#    #+#             */
/*   Updated: 2021/10/29 12:02:38 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*dup;

	len = ft_strlen(src);
	dup = malloc((len + 1) * sizeof(char));
	if (dup == 0)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i++] = '\0';
	return (dup);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}
