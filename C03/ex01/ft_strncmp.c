/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvander- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 08:33:01 by jvander-          #+#    #+#             */
/*   Updated: 2021/03/10 08:21:33 by jvander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int		cpt;

	cpt = 0;
	if (n == 0)
		return (0);
	while ((*(s1 + cpt) == *(s2 + cpt)) && cpt < n)
	{
		if (*(s1 + cpt) == '\0')
			return (0);
		if (cpt == n - 1)
			return (*(s1 + cpt) - *(s2 + cpt));
		cpt++;
	}
	return (*(s1 + cpt) - *(s2 + cpt));
}
