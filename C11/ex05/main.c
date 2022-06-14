/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvander- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 13:23:04 by jvander-          #+#    #+#             */
/*   Updated: 2021/03/25 14:35:54 by jvander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		main(int argc, char **argv)
{
	char *nbr1;
	char *nbr2;
	char *operator;

	if (argc != 4)
		return (1);
	nbr1 = argv[1];
	nbr2 = argv[3];
	operator = argv[2];
	if (ft_strlen(operator) > 1 || !ft_check_operator(operator[0]))
	{
		ft_putstr("0\n");
		return (1);
	}
	ft_do_op(nbr1, nbr2, operator);
	return (1);
}
