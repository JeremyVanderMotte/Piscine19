/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int-tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvander- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 09:13:21 by jvander-          #+#    #+#             */
/*   Updated: 2021/03/06 09:30:06 by jvander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int temp;
	int cpt;
	int cpt_2;

	cpt = 0;
	temp = 0;
	while (cpt < size)
	{
		cpt_2 = cpt + 1;
		while (cpt_2 < size)
		{
			if (*(tab + cpt) > *(tab + cpt_2))
			{
				temp = *(tab + cpt);
				*(tab + cpt) = *(tab + cpt_2);
				*(tab + cpt_2) = temp;
			}
			cpt_2++;
		}
		cpt++;
	}
}
