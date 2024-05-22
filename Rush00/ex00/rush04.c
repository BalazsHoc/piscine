/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbalando <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 13:59:37 by nbalando          #+#    #+#             */
/*   Updated: 2024/02/18 18:36:18 by nbalando         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	fun(int a, int b, int x, int y);

void	rush(int x, int y)
{
	int	a;
	int	b;

	a = 1;
	b = 1;
	if (x > 0 && y > 0)
	{
		while (b <= y)
		{
			while (a <= x)
			{
				fun(a, b, x, y);
				a++;
			}
			write(1, "\n", 1);
			a = 1;
			b++;
		}
	}
	else
	{
		write(1, "x and y should be more than 0", 29);
	}
}
