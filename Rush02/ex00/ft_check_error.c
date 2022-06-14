/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvander- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 14:29:32 by jvander-          #+#    #+#             */
/*   Updated: 2021/03/21 14:58:25 by jvander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_check_error(char *nbr)
{
	if (!ft_strcmp(nbr, ""))
	{
		ft_putstr("Error dict\n");
		return (0);
	}
	ft_putstr(nbr);
	ft_putchar(' ');
	return (1);
}
