/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvander- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 13:05:23 by jvander-          #+#    #+#             */
/*   Updated: 2021/03/24 13:15:31 by jvander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		cpt;
	int		cpt2;

	cpt2 = 0;
	cpt = 0;
	while (cpt < length - 1)
	{
		cpt2 = cpt + 1;
		while (cpt2 < length)
		{
			if ((*f)(tab[cpt], tab[cpt2]) < 0)
				return (0);
			cpt2++;
		}
		cpt++;
	}
	return (1);
}
