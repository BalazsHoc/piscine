/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhocsak <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 11:55:35 by bhocsak           #+#    #+#             */
/*   Updated: 2024/02/29 14:50:04 by bhocsak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((*s1 == *s2) && (*s1 != '\0') && (*s2 != '\0') && (i < n))
	{
		s1++;
		s2++;
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return (*s1 - *s2);
}
/*#include <stdio.h>

int main()
{
	printf("%d", ft_strncmp("Hello", "", 8));
}*/
