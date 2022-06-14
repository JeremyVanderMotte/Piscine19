/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvander- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 14:46:45 by jvander-          #+#    #+#             */
/*   Updated: 2021/03/07 16:24:19 by jvander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	afficher(char char1, char char2, char char3)
{
	char comma;
	char space;

	comma = 44;
	space = 32;
	write(1, &char1, 1);
	write(1, &char2, 1);
	write(1, &char3, 1);
	if (!(char1 == 55 && char2 == 56 && char3 == 57))
	{
		write(1, &comma, 1);
		write(1, &space, 1);
	}
}

void	ft_print_comb(void)
{
	char nbr1;
	char nbr2;
	char nbr3;

	nbr1 = 47;
	while (nbr1 <= 55)
	{
		nbr2 = nbr1 + 1;
		nbr1++;
		while (nbr2 <= 56)
		{
			nbr3 = nbr1 + 2;
			nbr2++;
			while (nbr3 <= 57)
			{
				if (nbr1 != nbr2 && nbr2 != nbr3 && nbr2 < nbr3 && nbr1 < nbr2)
				{
					afficher(nbr1, nbr2, nbr3);
				}
				nbr3++;
			}
		}
	}
}

int main(void)
{
ft_print_comb();
}
