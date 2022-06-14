/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_thousand.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvander- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 15:26:03 by jvander-          #+#    #+#             */
/*   Updated: 2021/03/21 19:01:33 by jvander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdlib.h>
#include <stdio.h>
char	*ft_get_thousand(int nbr)
{
	char	*to_ret;
	int		i;

	i = 1;
	to_ret = malloc(sizeof(char *) * (3 * nbr) + 2);
	if (!to_ret)
		return (NULL);
	*(to_ret) = '1';
	while (i <= (nbr * 3))
	{
		*(to_ret + i) = '0';
		i++;
	}
	*(to_ret + i) = '\0';
	return (to_ret);
}
