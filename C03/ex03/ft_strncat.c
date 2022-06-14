/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvander- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 09:01:54 by jvander-          #+#    #+#             */
/*   Updated: 2021/03/10 08:52:40 by jvander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int cpt;

	cpt = 0;
	while (*(str + cpt) != '\0')
	{
		cpt++;
	}
	return (cpt);
}

char			*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_len;
	unsigned int	cpt;

	dest_len = ft_strlen(dest);
	cpt = 0;
	while (*(src + cpt) != '\0' && cpt < nb)
	{
		*(dest + dest_len + cpt) = *(src + cpt);
		cpt++;
	}
	*(dest + dest_len + cpt) = '\0';
	return (dest);
}
