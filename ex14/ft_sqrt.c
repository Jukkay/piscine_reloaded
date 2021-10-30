/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 11:30:06 by jylimaul          #+#    #+#             */
/*   Updated: 2021/10/28 12:33:33 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	double	sqrt;
	double	temp;
	double	a;
	double	b;

	if (nb < 1)
		return (0);
	if (nb == 1)
		return (1);
	temp = 0;
	sqrt = nb / 2;
	while (sqrt != temp)
	{
		temp = sqrt;
		sqrt = (nb / temp + temp) / 2;
	}
	a = (int)sqrt;
	b = sqrt - a;
	if (b != 0)
		return (0);
	else
		return (sqrt);
}
