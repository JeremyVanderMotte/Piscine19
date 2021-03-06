/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_division.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvander- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 13:30:49 by jvander-          #+#    #+#             */
/*   Updated: 2021/03/25 13:47:17 by jvander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_division(char *nbr1, char *nbr2)
{
	return (ft_atoi(nbr1) / ft_atoi(nbr2));
}
