/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvander- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 08:14:51 by jvander-          #+#    #+#             */
/*   Updated: 2021/03/10 08:15:03 by jvander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int		cpt;

	cpt = 0;
	while (*(s1 + cpt) == *(s2 + cpt))
	{
		if (*(s1 + cpt) == '\0')
			return (0);
		cpt++;
	}
	return (*(s1 + cpt) - *(s2 + cpt));
}