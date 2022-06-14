/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr_tostr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvander- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 08:43:42 by jvander-          #+#    #+#             */
/*   Updated: 2021/03/21 20:46:39 by jvander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_nbr_tostr(char *nbr, t_convert *tab)
{
	int		i;
	i = 0;
	while (tab[i].str != '\0')
	{
		if (!ft_strcmp(nbr, tab[i].value))
			return (tab[i].str);
		i++;
	}
	return ("");
}
