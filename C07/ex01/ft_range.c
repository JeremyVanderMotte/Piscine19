/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvander- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 08:42:14 by jvander-          #+#    #+#             */
/*   Updated: 2021/03/16 09:14:26 by jvander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*tab;
	int		cpt;

	if (min >= max)
		return (0);
	if (!(tab = malloc(sizeof(int) * (max - min))))
		return (0);
	cpt = 0;
	while (cpt < (max - min))
	{
		*(tab + cpt) = cpt + min;
		cpt++;
	}
	return (tab);
}
