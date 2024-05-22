/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhocsak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:57:33 by bhocsak           #+#    #+#             */
/*   Updated: 2024/03/05 18:27:51 by bhocsak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	place;

	(void) argc;
	place = 1;
	while (place != argc)
	{
		i = 0;
		while (argv[place][i] != '\0')
		{
			write(1, &argv[place][i], 1);
			i++;
		}
		write(1, "\n", 1);
		place++;
	}
	return (0);
}
