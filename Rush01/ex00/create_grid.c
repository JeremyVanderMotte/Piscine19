/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_grid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 15:04:55 by ameunier          #+#    #+#             */
/*   Updated: 2021/03/14 09:09:59 by ameunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_fill_col_up(int **grid, int sort_argv, int i);
void	ft_fill_col_down(int **grid, int sort_argv, int i);
void	ft_fill_row_left(int **grid, int sort_argv, int i);
void	ft_fill_row_right(int **grid, int sort_argv, int i);
void	ft_put_zero(int **grid);

void	ft_fill_base_case(int **grid, int *sort_argv)
{
	int i;

	i = 0;
	while (i < 16)
	{
		if (sort_argv[i] == 4 || sort_argv[i] == 1)
		{
			if (i < 4)
				ft_fill_col_up(grid, sort_argv[i] ,i);
			else if (i < 8)
				ft_fill_col_down(grid, sort_argv[i] ,i);
			else if (i < 12)
				ft_fill_row_left(grid, sort_argv[i], i);
			else
				ft_fill_row_right(grid, sort_argv[i], i);
		}
		i++;
	}
	ft_put_zero(grid);
}

void	ft_fill_col_up(int **grid, int sort_argv, int i)
{
	int j;
	int push;
	j = 0;
	if (sort_argv == 1)
		grid[0][i] = 4;
	else
	{
		while (j < 4)
		{
			push = j;
			grid[j][i] = ++push;
			j++;
		}
	}
}

void	ft_fill_col_down(int **grid, int sort_argv, int i)
{
	int j;
	int push;
	j = 3;
	push = 1;
	if (sort_argv == 1)
		grid[3][i - 4] = 4;
	else
	{
		while (j > -1)
		{
			grid[j][i - 4] = push++; 
			j--;
		}
	}

}

void	ft_fill_row_left(int **grid, int sort_argv, int i)
{
	int j;
	int push;
	j = 0;
	if (sort_argv == 1)
		grid[i - 8][0] = 4;
	else
	{
		while (j < 4)
		{
			push = j;
			grid[i - 8][j] = ++push;
			j++;
		}
	}
}

void	ft_fill_row_right(int **grid, int sort_argv, int i)
{
	int j;
	int push;
	j = 3;
	push = 1;
	if (sort_argv == 1)
		grid[i - 12][3] = 4;
	else
	{
		while (j > -1)
		{
			grid[i - 12][j] = push++;
			j--;
		}
	}
}
