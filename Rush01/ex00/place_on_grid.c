/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place_on_grid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 17:46:03 by ameunier          #+#    #+#             */
/*   Updated: 2021/03/14 14:54:50 by ameunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int 	ft_check_first_box(int pos, int *argv_int, int k);
int		ft_check_all_view(int **grid, int *argv_int);
int		ft_check_duplicate(int **grid, int pos, int to_check);
int		ft_draw_grid(int **grid);

int		ft_place_on_grid(int **grid, int *argv_int, int pos)
{
	int i;
	int j;
	int k;

	i = pos / 4;
	j = pos % 4;
	if (pos == 4 * 4)
	{
		printf("plop");
		return (ft_check_all_view(grid,argv_int));
	}
	if (grid[i][j] != 0)
		return (ft_place_on_grid(grid, argv_int, pos + 1));
	k = 1;
	while (k <= 4)
	{
		printf("k1 %d\n", k);
		printf("[%d][%d]\n", i, j);
		printf("pos %d: \n", pos);
		if ((ft_check_duplicate(grid, pos, k)) && ft_check_first_box(pos, argv_int, k))
		{
			grid[i][j] = k;
			printf("k2 %d\n", k);
			ft_draw_grid(grid);
			printf("---------------------------------\n");
			if (ft_place_on_grid(grid, argv_int, pos + 1))
				return (1);
		}
		k++;
	}
	grid[i][j] = 0;
	return (0);
}
