/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_box_view_grid.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvander- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 10:58:10 by jvander-          #+#    #+#             */
/*   Updated: 2021/03/14 14:39:26 by ameunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_check_view_row(int grid[4][4], int argv_int[16])
{
	int		count;
	int		cpt;
	int 	cpt2;
	int 	temp;
	
	cpt = 8;
	while (cpt < 12)
	{
		cpt2 = 0;
		count = 0;
		temp = grid[cpt % 4][0];
		while (cpt2 < 3)
		{
			if (temp < grid[cpt % 4][cpt2 + 1]
					&& grid[cpt % 4][cpt2] < grid[cpt % 4][cpt2 + 1])
			{
				temp = grid[cpt % 4][cpt2 + 1];
				count++;
			}
			cpt2++;
		}
		if (count != argv_int[cpt] - 1)
			return (0);
		cpt++;
	}
	return (1);
}

int 	ft_check_view_row_rev(int grid[4][4], int argv_int[16])
{
	int		count;
	int		cpt;
	int		cpt2;
	int		temp;

	cpt = 12;
	while (cpt < 16)
	{
		cpt2 = 3;
		count = 0;
		temp = grid[cpt % 4][3];
		while (cpt2 > 0)
		{
			if (grid[cpt % 4][cpt2 - 1] > grid[cpt % 4][cpt2]
					&& temp < grid[cpt % 4][cpt2 - 1])
			{
				temp = grid[cpt % 4][cpt2 - 1];
				count++;
			}
			cpt2--;
		}
		if (count != argv_int[cpt] - 1)
			return (0);
		cpt++;
	}
	return (1);
}

int 	ft_check_view_col(int grid[4][4], int argv_int[16])
{
	int		count;
	int		cpt;
	int 	cpt2;
	int		temp;

	cpt = 0;
	while (cpt < 4)
	{
		cpt2 = 0;
		count = 0;
		temp = grid[0][cpt % 4];
		while (cpt2 < 3)
		{
			if ((temp < grid[cpt2 + 1][cpt % 4]) 
					&& (grid[cpt2][cpt % 4] < grid[cpt2 + 1][cpt % 4]))
			{
				temp = grid[cpt2 + 1][cpt % 4];
				count++;
			}
			cpt2++;
		}
		if (count != argv_int[cpt] - 1)
			return (0);
		cpt++;
	}
	return (1);
}

int 	ft_check_view_col_rev(int grid[4][4], int argv_int[16])
{
	int		count;
	int		cpt;
	int		cpt2;
	int 	temp;

	cpt = 4;
	while (cpt < 8)
	{
		cpt2 = 3;
		count = 0;
		temp = grid[3][cpt % 4];
		while (cpt2 > 0)
		{
			if (temp < grid[cpt2 - 1][cpt % 4] 
					&& grid[cpt2][cpt % 4] < grid[cpt2 - 1][cpt % 4])
			{
				temp = grid[cpt2 - 1][cpt % 4];
				count++;
			}
			cpt2--;
		}
		if (count != argv_int[cpt] - 1)
			return (0);
		cpt++;
	}
	return (1);
}

int		ft_check_all_view(int grid[4][4], int argv_int[16])
{
	if (!ft_check_view_col(grid, argv_int))
		return (0);
	if (!ft_check_view_col_rev(grid, argv_int))
		return (0);
	if (!ft_check_view_row(grid, argv_int))
		return (0);
	if (!ft_check_view_row_rev(grid, argv_int))
		return (0);
	return (1);
}

int main()
{
    int grid[4][4] = {{4,1,2,3},{3,2,1,4},{1,3,4,2},{2,4,3,1}};
    int tab[16] = {1,4,2,2,3,1,2,3,1,2,3,2,2,1,2,3};
    printf("%d", ft_check_all_view(grid, tab));
}
