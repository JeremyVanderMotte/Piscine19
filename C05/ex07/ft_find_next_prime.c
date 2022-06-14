/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvander- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 14:35:21 by jvander-          #+#    #+#             */
/*   Updated: 2021/03/11 10:14:29 by jvander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int		cpt;

	if (nb <= 1)
		return (0);
	cpt = 2;
	while (cpt <= (nb / cpt))
	{
		if (nb % cpt == 0)
			return (0);
		cpt++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int		res;

	res = nb;
	if (nb < 2)
		return (2);
	while (!ft_is_prime(res))
	{
		res++;
	}
	return (res);
}
