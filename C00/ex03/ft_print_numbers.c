/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvander- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 14:11:02 by jvander-          #+#    #+#             */
/*   Updated: 2021/03/04 14:36:05 by jvander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int chiffre;

	chiffre = 48;
	while (chiffre <= 57)
	{
		write(1, &chiffre, 1);
		chiffre++;
	}
}
