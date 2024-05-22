/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhocsak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:23:53 by bhocsak           #+#    #+#             */
/*   Updated: 2024/02/22 10:49:13 by bhocsak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	check;
	int	swap;

	i = 1;
	check = 0;
	while (i <= size - 1)
	{
		while (check < i)
		{
			if (tab[i] < tab[check])
			{
				swap = tab[i];
				tab[i] = tab[check];
				tab[check] = swap;
			}
			else
			{
			}
			check++;
		}
		i++;
		check = 0;
	}
}
