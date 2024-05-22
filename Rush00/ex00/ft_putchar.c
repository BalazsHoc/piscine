/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbalando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 13:59:05 by nbalando          #+#    #+#             */
/*   Updated: 2024/02/18 18:31:03 by nbalando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char q)
{
	write(1, &q, 1);
}

void	fun(int a, int b, int x, int y)
{
	if ((a == 1 && b == 1) || (a > 1 && a == x && b == y && b > 1))
	{
		ft_putchar('A');
	}
	else if ((a == x && b == 1) || (a == 1 && b == y))
	{
		ft_putchar('C');
	}
	else if ((a > 1 && a < x) && (b > 1 && b < y))
	{
		ft_putchar(' ');
	}
	else
	{
		ft_putchar('B');
	}
}
