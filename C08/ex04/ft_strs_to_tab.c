/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvander- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 12:56:43 by jvander-          #+#    #+#             */
/*   Updated: 2021/03/23 10:03:32 by jvander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int					ft_strlen(char *str)
{
	int					cpt;

	cpt = 0;
	while (str[cpt] != '\0')
	{
		cpt++;
	}
	return (cpt);
}

char				*ft_strcpy(char *dest, char *src)
{
	int					cpt;

	cpt = 0;
	while (*(src + cpt) != '\0')
	{
		*(dest + cpt) = *(src + cpt);
		cpt++;
	}
	*(dest + cpt) = '\0';
	return (dest);
}

char				*ft_strdup(char *src)
{
	char			*to_ret;

	if (!(to_ret = malloc(ft_strlen(src) + 1)))
		return (0);
	ft_strcpy(to_ret, src);
	return (to_ret);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str		*tab;
	int						cpt;

	if (!(tab = malloc(sizeof(struct s_stock_str) * (ac + 1))))
		return (NULL);
	cpt = 0;
	if (ac < 0)
		return (NULL);
	while (cpt < ac)
	{
		tab[cpt].size = ft_strlen(av[cpt]);
		tab[cpt].str = av[cpt];
		tab[cpt].copy = ft_strdup(av[cpt]);
		cpt++;
	}
	tab[cpt].str = 0;
	return (tab);
}
