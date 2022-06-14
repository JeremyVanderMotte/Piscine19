/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvander- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 16:47:11 by jvander-          #+#    #+#             */
/*   Updated: 2021/03/05 17:48:58 by jvander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	afficher(char nbr1, char nbr2, char nbr3, char nbr4)
{
	char space;
	char comma;

	space = 32;
	comma = 44;
	if (!((nbr1 == nbr3) && (nbr2 == nbr4)) && ((nbr4 > nbr2) || (nbr3 > nbr1)))
	{
		write(1, &nbr1, 1);
		write(1, &nbr2, 1);
		write(1, &space, 1);
		write(1, &nbr3, 1);
		write(1, &nbr4, 1);
		if (!(nbr1 == 57 && nbr2 == 57 && nbr3 == 57 && nbr4 == 56))
		{
			write(1, &comma, 1);
			write(1, &space, 1);
		}
	}
}

void	ft_print_comb2(void)
{
	char tab[4];

	tab[0] = 47;
	while (tab[0] < 57)
	{
		tab[0]++;
		tab[1] = 47;
		while (tab[1] < 57)
		{
			tab[1]++;
			tab[2] = 47;
			while (tab[2] < 57)
			{
				tab[2]++;
				tab[3] = 48;
				while (tab[3] <= 57)
				{
					afficher(tab[0], tab[1], tab[2], tab[3]);
					tab[3]++;
				}
			}
		}
	}
}
