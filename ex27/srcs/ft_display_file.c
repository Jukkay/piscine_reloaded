/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jylimaul <jylimaul@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 11:22:56 by jylimaul          #+#    #+#             */
/*   Updated: 2021/10/30 14:20:32 by jylimaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>

int		ft_check_arguments(int argc);
void	ft_print_std_error(char *error);
void	ft_orwc_file(char *filename);

int	ft_display_file(int argc, char **argv)
{
	if (ft_check_arguments(argc))
		return (0);
	ft_orwc_file(argv[1]);
	return (0);
}

int	ft_check_arguments(int argc)
{
	if (argc < 2)
	{
		ft_print_std_error("File name missing.");
		return (1);
	}
	if (argc > 2)
	{
		ft_print_std_error("Too many arguments.");
		return (1);
	}
	return (0);
}

void	ft_print_std_error(char *error)
{
	int	i;

	i = 0;
	while (error[i] != '\0')
	{
		write (2, &error[i], 1);
		i++;
	}
	write (2, "\n", 1);
}

void	ft_orwc_file(char *filename)
{
	int		fd;
	char	buf[1024];
	int		rlen;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return ;
	while (1)
	{
		rlen = read(fd, buf, 1024);
		if (rlen <= 0)
			return ;
		write (1, &buf, rlen);
	}
	if ((close (fd)) < 0)
		return ;
}
