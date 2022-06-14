/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvander- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 10:17:20 by jvander-          #+#    #+#             */
/*   Updated: 2021/03/21 11:17:28 by jvander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

unsigned int		ft_atoi(char *str)
{
	int					i;
	unsigned int		res;

	i = 0;
	res = 0;
	while (str[i] == 32)
		i++;
	if (str[i] == '+')
		i++;
	while (ft_is_nbr(str[i]) && str[i] != '\0')
	{
		res *= 10;
		res += str[i] - 48;
		i++;
	}
	return (res);
}
