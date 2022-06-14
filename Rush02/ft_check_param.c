/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvander- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 13:45:02 by jvander-          #+#    #+#             */
/*   Updated: 2021/03/21 11:39:13 by jvander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_check_nbr_param(int argc)
{
	if (argc > 3 || argc < 2)
		return (0);
	return (1);
}

int		ft_check_is_correct_str(char *nbr)
{
	int		i;

	i = 0;
	while (ft_is_nbr(nbr[i]) && nbr[i] != '\0')
		i++;
	if (i == ft_strlen(nbr))
		return (1);
	return (0);
}
