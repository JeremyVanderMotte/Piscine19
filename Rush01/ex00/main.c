/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 12:02:05 by ameunier          #+#    #+#             */
/*   Updated: 2021/03/14 14:29:14 by ameunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_argv_char_to_int(char *argv, int *argv_int);
void	ft_fill_base_case(int **gird, int *sort_argv);
void	ft_place_on_grid(int **grid, int *argv_int, int pos);
void	ft_draw_grid(int **grid);

int		main(int argc, char **argv)
{
	int **grid;
	int *argv_int;

	(void) argc;

	grid = malloc(sizeof(int *) * 4);
	grid[1] = malloc(sizeof(int) * 4);
	grid[2] = malloc(sizeof(int) * 4);
	grid[3] = malloc(sizeof(int) * 4);
	grid[4] = malloc(sizeof(int) * 4);
	argv_int = malloc(sizeof(int) * 16);

	ft_argv_char_to_int(argv[1], argv_int);
	ft_fill_base_case(grid, argv_int);
	ft_place_on_grid(grid, argv_int, 0);
	ft_draw_grid(grid);

	free(grid);
	free(argv_int);
}
