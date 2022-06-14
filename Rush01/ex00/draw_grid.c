/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_grid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 14:09:47 by ameunier          #+#    #+#             */
/*   Updated: 2021/03/14 09:34:57 by ameunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);

void	ft_draw_grid(int **grid)
{
	char	permut;
	int		i;
	int		k;

	i = 0;
	while (i < 4)
	{
		k = 0;
		while (k < 4)
		{
			permut = grid[i][k] + '0';
			ft_putchar(permut);
			if (k != 4 - 1)
				ft_putchar(' ');
			k++;		
		}
		ft_putchar('\n');
		i++;
	}	
}
