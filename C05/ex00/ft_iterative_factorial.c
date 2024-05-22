/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhocsak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 12:13:47 by bhocsak           #+#    #+#             */
/*   Updated: 2024/03/04 13:17:51 by bhocsak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	while (nb > 0)
	{
		result = nb * result;
		nb--;
	}
	return (result);
}
/*
#include <stdio.h>

int	main()
{
	int nb = 5;
	printf("%d", ft_iterative_factorial(nb));
	return (0);
}*/
