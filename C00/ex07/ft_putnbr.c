/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvander- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 08:09:53 by jvander-          #+#    #+#             */
/*   Updated: 2021/03/08 16:10:55 by jvander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_pow(int exp)
{
	int res;

	res = 1;
	while (exp >= 1)
	{
		res *= 10;
		exp--;
	}
	return (res);
}

int		ft_nb_ten(int nb)
{
	int		nbr_ten;

	nbr_ten = 0;
	while (nb >= 10)
	{
		nb /= 10;
		nbr_ten++;
	}
	return (nbr_ten);
}

void	ft_putnbr(int nb)
{
	int		nbr_ten;
	int 	nbr_temp;
	char	nbr_display;
	unsigned int nbr_to_use;

	nbr_to_use = nb;
	if (nb < 0)
	{
		nbr_to_use = -nbr_to_use;
		printf("fnlewkfnw %d", nb);
		write(1, "-", 1);
	}
	nbr_ten = ft_nb_ten(nb);
	nbr_temp = nb;
	while (nbr_ten > 0)
	{
		nbr_temp = ft_pow(nbr_ten);
		nbr_display = 48 + (nb / nbr_temp);
		write(1, &nbr_display, 1);
		nbr_ten--;
		nb %= nbr_temp;
	}
	nbr_display = 48 + nb;
	write(1, &nbr_display, 1);
}

int main(void){
	ft_putnbr(-2147483648);
}
