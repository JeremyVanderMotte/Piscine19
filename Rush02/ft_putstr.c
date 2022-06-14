/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvander- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 09:15:58 by jvander-          #+#    #+#             */
/*   Updated: 2021/03/20 09:18:16 by jvander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putstr(char *str)
{
	int		cpt;

	cpt = 0;
	while (str[cpt] != '\0')
	{
		ft_putchar(str[cpt]);
		cpt++;
	}
}