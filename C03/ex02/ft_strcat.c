/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvander- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 08:48:31 by jvander-          #+#    #+#             */
/*   Updated: 2021/03/10 08:36:24 by jvander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	cpt;

	cpt = 0;
	while (*(str + cpt) != '\0')
	{
		cpt++;
	}
	return (cpt);
}

char			*ft_strcat(char *dest, char *src)
{
	unsigned int	dest_length;
	unsigned int	cpt;

	cpt = 0;
	dest_length = ft_strlen(dest);
	while (*(src + cpt) != '\0')
	{
		*(dest + dest_length + cpt) = *(src + cpt);
		cpt++;
	}
	*(dest + dest_length + cpt) = '\0';
	return (dest);
}
