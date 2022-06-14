/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvander- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 09:09:01 by jvander-          #+#    #+#             */
/*   Updated: 2021/03/25 13:26:06 by jvander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		cpt;

	cpt = 0;
	while (*(str + cpt) != '\0')
	{
		cpt++;
	}
	return (cpt);
}

char	*ft_strcat(char *dest, char *src)
{
	int		dest_length;
	int		cpt;

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

int		ft_get_total_size(char **str, char *sep, int size)
{
	int		total;
	int		cpt;

	total = 0;
	cpt = 0;
	while (cpt < size)
	{
		total += ft_strlen(str[cpt]);
		total += ft_strlen(sep);
		cpt++;
	}
	return (total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*to_ret;
	int		cpt;
	int		total_size;

	if (size < 0)
		return (0);
	total_size = ft_get_total_size(strs, sep, size);
	if (!(to_ret = malloc(sizeof(char) * (total_size + 1))))
		return (0);
	if (size == 0)
		return (malloc(0));
	cpt = 0;
	while (cpt < size)
	{
		ft_strcat(to_ret, strs[cpt]);
		if (cpt < size - 1 && ft_strlen(sep) > 0)
			ft_strcat(to_ret, sep);
		cpt++;
	}
	to_ret[total_size] = '\0';
	return (to_ret);
}
