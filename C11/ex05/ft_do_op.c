/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvander- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 15:19:47 by jvander-          #+#    #+#             */
/*   Updated: 2021/03/25 13:53:15 by jvander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

typedef	int	(*f)(char *, char *); 

void	ft_do_op(char *nbr1, char *nbr2, char *op)
{
	f tab[5] = {&ft_addition, &ft_substraction, &ft_multiplication,
		 &ft_division, &ft_modulo};
	if (op[0] == '+')
		ft_putnbr(ft_calculate(nbr1, nbr2, tab[0]));
	if (op[0] == '-')
		ft_putnbr(ft_calculate(nbr1, nbr2, tab[1]));
	if (op[0] == '*')
		ft_putnbr(ft_calculate(nbr1, nbr2, tab[2]));
	if (op[0] == '/')
	{
		if (ft_atoi(nbr2) == 0)
		{
			ft_putstr("Stop : division by zero");
			return ;
		}
		ft_putnbr(ft_calculate(nbr1, nbr2, tab[3]));
	}
	if (op[0] == '%')
	{
		if (ft_atoi(nbr2) == 0)
		{
			ft_putstr("Stop : modulo by zero");
			return ;
		}
		ft_putnbr(ft_calculate(nbr1, nbr2, tab[4]));
	}
}
