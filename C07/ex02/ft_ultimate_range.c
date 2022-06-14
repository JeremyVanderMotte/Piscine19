/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvander- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 11:24:58 by jvander-          #+#    #+#             */
/*   Updated: 2021/03/18 14:17:33 by jvander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		cpt;
	int		taille;

	taille = max - min;
	cpt = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (!(range[0] = malloc(sizeof(**range) * taille)))
		return (-1);
	while (cpt < taille)
	{
		range[0][cpt] = cpt + min;
		cpt++;
	}
	return (taille);
}
