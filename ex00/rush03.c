/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wteles-d <wteles-d@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 14:22:32 by wteles-d          #+#    #+#             */
/*   Updated: 2023/03/04 18:54:47 by wteles-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int n, char a, char b, char c);

void	rush_03(int x, int y)
{
	int	i;

	i = 0;
	while (++i <= y)
	{
		if (i == 1 || i >= y)
			ft_putchar(x, 'A', 'B', 'C');
		else
			ft_putchar(x, 'B', ' ', 'B');
	}	
}
