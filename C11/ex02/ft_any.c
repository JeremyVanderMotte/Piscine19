/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvander- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 11:58:06 by jvander-          #+#    #+#             */
/*   Updated: 2021/03/24 12:18:54 by jvander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_any(char **tab, int (*f)(char*))
{
	int		cpt;

	cpt = 0;
	while (*(tab + cpt))
	{
		if ((*f)(*(tab + cpt)) != 0)
			return (1);
		cpt++;
	}
	return (0);
}