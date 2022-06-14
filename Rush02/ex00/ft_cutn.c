/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cutn.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvander- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 14:53:33 by jvander-          #+#    #+#             */
/*   Updated: 2021/03/21 17:39:20 by jvander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdlib.h>

char	*ft_cutn(char *nbr, int n)
{
	int		nbr_size;
	char	*to_ret;
	int		i;

	i = 0;
	nbr_size = ft_strlen(nbr);
	to_ret = malloc(sizeof(char *) * 100);
	if (to_ret == NULL)
	{
		ft_putstr("ERROR MALLOC FT_CUTN\n");
		return (NULL);
	}
	while (*(nbr + i + n) != '\0')
	{
		*(to_ret + i) = *(nbr + i + n);
		i++;
	}
	*(to_ret + i) = '\0';
	return (to_ret);
}
