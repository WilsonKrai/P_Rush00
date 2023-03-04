/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wteles-d <wteles-d@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 17:18:43 by wteles-d          #+#    #+#             */
/*   Updated: 2023/03/04 18:56:18 by wteles-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int n, char a, char b, char c)
{
	int	i;

	i = 0;
	while (++i <= n)
	{
		while (i < n)
		{
			if (i == 1)
			{
				write (1, &a, 1);
				i++;
			}
			else
			{
				write(1, &b, 1);
				i++;
			}
		}
		if (i == n && i > 1)
			write(1, &c, 1);
		else
			write(1, &a, 1);
	}
	if (i > n)
		write(1, "\n", 1);
}
