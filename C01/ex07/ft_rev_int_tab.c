/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhocsak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:03:28 by bhocsak           #+#    #+#             */
/*   Updated: 2024/02/22 13:01:58 by bhocsak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	e;
	int	temp;

	i = 0;
	e = size - 1;
	while (i < e)
	{
		temp = tab[i];
		tab[i] = tab[e];
		tab[e] = temp;
		i++;
		e--;
	}
}
