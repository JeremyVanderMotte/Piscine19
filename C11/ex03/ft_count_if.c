/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvander- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 12:20:44 by jvander-          #+#    #+#             */
/*   Updated: 2021/03/24 13:04:41 by jvander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int length, int (*f)(char *))
{
	int		cpt;
	int		count;

	cpt = 0;
	count = 0;
	while (cpt < length)
	{
		if ((*f)(*(tab + cpt)) != 0)
			count++;
		cpt++;
	}
	return (count);
}
