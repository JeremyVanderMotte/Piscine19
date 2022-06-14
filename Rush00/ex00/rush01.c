/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvander- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 09:59:34 by jvander-          #+#    #+#             */
/*   Updated: 2021/03/07 14:04:08 by jvander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char character);

void	display_nbr(int x, int y, int cpt_1, int cpt_2)
{
	if (cpt_2 == 1 && cpt_1 == 1)
		ft_putchar('/');
	else if (cpt_2 == 1 && (cpt_1 == y))
		ft_putchar('\\');
	else if (cpt_1 == 1 && (cpt_2 == x))
		ft_putchar('\\');
	else if ((cpt_2 == x) && (cpt_1 == y))
		ft_putchar('/');
	else if ((cpt_1 == 1) && (cpt_2 != 1))
		ft_putchar('*');
	else if ((cpt_1 == y) && (cpt_2 != 1))
		ft_putchar('*');
	else if ((cpt_1 != 1) && (cpt_2 == 1))
		ft_putchar('*');
	else if ((cpt_1 != 1) && (cpt_2 == x))
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int cpt_1;
	int cpt_2;

	if (x < 1 || y < 1)
		return ;
	cpt_1 = 1;
	while (cpt_1 <= y)
	{
		cpt_2 = 1;
		while (cpt_2 <= x)
		{
			display_nbr(x, y, cpt_1, cpt_2);
			cpt_2++;
		}
		ft_putchar('\n');
		cpt_1++;
	}
}
