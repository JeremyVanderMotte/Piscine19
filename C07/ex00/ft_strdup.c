/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvander- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 17:25:41 by jvander-          #+#    #+#             */
/*   Updated: 2021/03/11 08:43:10 by jvander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char			*ft_strcpy(char *dest, char *src)
{
	int				cpt;

	cpt = 0;
	while (*(src + cpt) != '\0')
	{
		*(dest + cpt) = *(src + cpt);
		cpt++;
	}
	*(dest + cpt) = '\0';
	return (dest);
}

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

char			*ft_strdup(char *src)
{
	char			*to_ret;

	if (!(to_ret = malloc(ft_strlen(src) + 1)))
		return (0);
	ft_strcpy(to_ret, src);
	return (to_ret);
}
