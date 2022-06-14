/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvander- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 11:53:29 by jvander-          #+#    #+#             */
/*   Updated: 2021/03/24 12:59:36 by jvander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		*to_ret;
	int		cpt;

	if (!(to_ret = malloc(sizeof(int) * length)))
		return (NULL);
	cpt = 0;
	while (cpt < length)
	{
		to_ret[cpt] = (*f)(tab[cpt]);
		cpt++;
	}
	return (to_ret);
}
