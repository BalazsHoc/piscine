/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhocsak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 13:19:23 by bhocsak           #+#    #+#             */
/*   Updated: 2024/03/04 13:35:20 by bhocsak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		result = nb * result;
		power--;
	}
	return (result);
}
/*
#include <stdio.h>

int	main()
{
	int nb = 5;
	int power = 2;

	printf("%d", ft_iterative_power(nb, power));
	return (0);
}*/
