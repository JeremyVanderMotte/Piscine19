/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_zero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 16:45:16 by ameunier          #+#    #+#             */
/*   Updated: 2021/03/14 11:16:11 by ameunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



void	ft_put_zero(int **grid)
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			if (!(grid[i][j] == 1 || grid[i][j] == 2 || grid[i][j] == 3 
				|| grid[i][j] == 4))
			{
				grid[i][j] = 0;
			}
			j++;
		}
		i++;
	}
}
