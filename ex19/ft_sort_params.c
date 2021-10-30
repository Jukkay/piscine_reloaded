/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 16:58:21 by jylimaul          #+#    #+#             */
/*   Updated: 2021/10/29 12:13:37 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
int		ft_strcmp(char *s1, char *s2);
void	ft_print_params(int argc, char **argv);

int	main(int argc, char **argv)
{
	int		i;
	char	*temp;
	int		i2;

	i = 1;
	while (i < argc)
	{
		i2 = 1;
		while (i2 < argc - 1)
		{
			if (ft_strcmp(argv[i2], argv[i2 + 1]) > 0)
			{
				temp = argv[i2];
				argv[i2] = argv[i2 + 1];
				argv[i2 + 1] = temp;
			}
			i2++;
		}
		i++;
	}
	ft_print_params(argc, argv);
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	ft_print_params(int argc, char **argv)
{
	int	i;
	int	i2;

	i = 1;
	while (i < argc)
	{
		i2 = 0;
		while (argv[i][i2] != '\0')
		{
			ft_putchar(argv[i][i2]);
			i2++;
		}
		ft_putchar('\n');
		i++;
	}
}
