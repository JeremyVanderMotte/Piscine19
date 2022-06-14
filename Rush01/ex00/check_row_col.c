/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_row_col.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvander- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 15:53:30 by jvander-          #+#    #+#             */
/*   Updated: 2021/03/14 14:50:56 by ameunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_check_duplicate(int grid[4][4], int pos, int to_check)
{
	int		cpt;

	cpt = 0;
	while (cpt < 4)
	{
		if (grid[cpt][pos % 4] == to_check)
			return (0);
		if (grid[pos / 4][cpt] == to_check)
			return (0);
		cpt++;
	}
	return (1);
}

int		ft_check_first_box(int pos, int argv_int[16], int k)
{
	int line;
	int row;

	line = pos / 4;
	row = pos % 4;
	if ((line != 0 || row != 0 || line != 3 || row != 3))
			return (1);
	if (pos == 0)
		return ((argv_int[0] + k <= 5) && (argv_int[8] + k <= 5));
	if (pos == 3)
		return ((argv_int[3] + k <= 5) && (argv_int[12] + k <= 5));
	if (pos == 12)
		return ((argv_int[4] + k <= 5) && (argv_int[11] + k <= 5));
	if (pos == 15)
		return ((argv_int[7] + k <= 5) && (argv_int[15] + k <= 5));
	return (argv_int[pos] + k <= 5);
}

int main()
{
    int grid[4][4] = {{4,1,2,3},{3,2,1,4},{1,3,4,3},{2,4,4,1}};
    int tab[16] = {1,4,2,2,3,1,2,3,1,2,3,2,2,1,2,3};
    printf("%d\n",ft_check_duplicate(grid, 0, 1));
    printf("%d\n",ft_check_duplicate(grid, 0, 3));
    printf("%d\n",ft_check_duplicate(grid, 0, 2));
    printf("%d\n",ft_check_duplicate(grid, 0, 4));
    printf("%d\n",ft_check_duplicate(grid, 1, 1));
    printf("%d\n",ft_check_duplicate(grid, 1, 2));
    printf("%d\n",ft_check_duplicate(grid, 1, 3));
    printf("%d\n",ft_check_duplicate(grid, 1, 4));
    printf("%d\n",ft_check_duplicate(grid, 2, 1));
    printf("%d\n",ft_check_duplicate(grid, 2, 2));
    printf("%d\n",ft_check_duplicate(grid, 2, 3));
    printf("%d\n",ft_check_duplicate(grid, 2, 4));
    printf("%d\n",ft_check_duplicate(grid, 3, 1));
    printf("%d\n",ft_check_duplicate(grid, 3, 2));
    printf("%d\n",ft_check_duplicate(grid, 3, 3));
    printf("%d\n",ft_check_duplicate(grid, 3, 4));
    printf("%d\n",ft_check_duplicate(grid, 4, 1));
    printf("%d\n",ft_check_duplicate(grid, 4, 2));
    printf("%d\n",ft_check_duplicate(grid, 4, 3));
    printf("%d\n",ft_check_duplicate(grid, 4, 4));
    printf("%d\n",ft_check_duplicate(grid, 5, 1));
    printf("%d\n",ft_check_duplicate(grid, 5, 2));
    printf("%d\n",ft_check_duplicate(grid, 5, 3));
    printf("%d\n",ft_check_duplicate(grid, 5, 4));
    printf("%d\n",ft_check_duplicate(grid, 6, 1));
    printf("%d\n",ft_check_duplicate(grid, 6, 2));
    printf("%d\n",ft_check_duplicate(grid, 6, 3));
    printf("%d\n",ft_check_duplicate(grid, 6, 4));
    printf("%d\n",ft_check_duplicate(grid, 7, 1));
    printf("%d\n",ft_check_duplicate(grid, 7, 2));
    printf("%d\n",ft_check_duplicate(grid, 7, 3));
    printf("%d\n",ft_check_duplicate(grid, 7, 4));
    printf("%d\n",ft_check_duplicate(grid, 8, 1));
    printf("%d\n",ft_check_duplicate(grid, 8, 2));
    printf("%d\n",ft_check_duplicate(grid, 8, 3));
    printf("%d\n",ft_check_duplicate(grid, 8, 4));
    printf("%d\n",ft_check_duplicate(grid, 9, 1));
    printf("%d\n",ft_check_duplicate(grid, 9, 2));
    printf("%d\n",ft_check_duplicate(grid, 9, 3));
    printf("%d\n",ft_check_duplicate(grid, 9, 4));
    printf("%d\n",ft_check_duplicate(grid, 10, 1));
    printf("%d\n",ft_check_duplicate(grid, 10, 2));
    printf("%d\n",ft_check_duplicate(grid, 10, 3));
    printf("%d\n",ft_check_duplicate(grid, 10, 4));
    printf("%d\n",ft_check_duplicate(grid, 11, 1));
    printf("%d\n",ft_check_duplicate(grid, 11, 2));
    printf("%d\n",ft_check_duplicate(grid, 11, 3));
    printf("%d\n",ft_check_duplicate(grid, 11, 4));
    printf("%d\n",ft_check_duplicate(grid, 12, 1));
    printf("%d\n",ft_check_duplicate(grid, 12, 2));
    printf("%d\n",ft_check_duplicate(grid, 12, 3));
    printf("%d\n",ft_check_duplicate(grid, 12, 4));
    printf("%d\n",ft_check_duplicate(grid, 13, 1));
    printf("%d\n",ft_check_duplicate(grid, 13, 2));
    printf("%d\n",ft_check_duplicate(grid, 13, 3));
    printf("%d\n",ft_check_duplicate(grid, 13, 4));
    printf("%d\n",ft_check_duplicate(grid, 14, 1));
    printf("%d\n",ft_check_duplicate(grid, 14, 2));
    printf("%d\n",ft_check_duplicate(grid, 14, 3));
    printf("%d\n",ft_check_duplicate(grid, 14, 4));
    printf("%d\n",ft_check_duplicate(grid, 15, 1));
    printf("%d\n",ft_check_duplicate(grid, 15, 2));
    printf("%d\n",ft_check_duplicate(grid, 15, 3));
    printf("%d\n",ft_check_duplicate(grid, 15, 4));
    printf("%d\n",ft_check_duplicate(grid, 16, 1));
    printf("%d\n",ft_check_duplicate(grid, 16, 2));
    printf("%d\n",ft_check_duplicate(grid, 16, 3));
    printf("%d\n",ft_check_duplicate(grid, 16, 4));
    
}
