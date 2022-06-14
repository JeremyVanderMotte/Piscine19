/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvander- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 12:35:19 by jvander-          #+#    #+#             */
/*   Updated: 2021/03/10 09:49:36 by jvander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlength(char *s)
{
	unsigned int	cpt;

	cpt = 0;
	while (*(s + cpt) != '\0')
	{
		cpt++;
	}
	return (cpt);
}

char			*ft_strstr(char *str, char *to_find)
{
	unsigned int	cpt;
	unsigned int	cpt2;
	unsigned int	to_find_length;

	to_find_length = ft_strlength(to_find);
	cpt = 0;
	while (*(str + cpt) != '\0')
	{
		cpt2 = 0;
		while (*(str + cpt + cpt2) == *(to_find + cpt2)
               && *(to_find + cpt2) != '\0')
		{
            cpt2++;
		}
		if (cpt2 == to_find_length)
			return (str + cpt);
		cpt++;
	}
	return (0);
}
