/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_word.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlong <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 10:43:11 by jlong             #+#    #+#             */
/*   Updated: 2021/03/21 21:00:33 by jvander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft.h"
#include <stdlib.h>

int		ft_check_19(char *nbr, t_convert *tab)
{
	char *cut_nbr;

	if (!ft_strcmp(nbr, ""))
	{
		ft_putstr("Error dict\n");
		return (0);
	}
	if (nbr[0] == '0' && ft_strlen(nbr) == 2)
	{
		cut_nbr = ft_cutn(nbr, 1);
		ft_putstr(ft_nbr_tostr(cut_nbr, tab));
		return (1);
	}
	ft_putstr(ft_nbr_tostr(nbr, tab));
	return (1);
}

int		ft_check_20_99(char *nbr, t_convert *tab)
{
	char *c;

	if (nbr[1] == '0')
	{
		ft_putstr(ft_nbr_tostr(nbr, tab));
		return(1);
	}
	c = malloc(sizeof(char *) * 100);
	if (!c)
		return (0);	
	*c = nbr[0];
	*(c + 1) = '0';
	*(c + 2) = '\0';
	ft_putstr(ft_nbr_tostr(c, tab));
	ft_putstr(" ");
	*c = nbr[1];
	*(c + 1) = '\0';
	ft_putstr(ft_nbr_tostr(c, tab));
	return (1);
}

int		ft_check_100_999(char *nbr, t_convert *tab)
{
	char	*c;
	char	*cut_nbr;

	c = malloc(sizeof(char *) * 100);
	*c = nbr[0];
	*(c + 1) = '\0';
	if (nbr[0] == '0')
	{
		cut_nbr = ft_cutn(nbr, 1);;
		if (cut_nbr[0] < '2')
			ft_check_19(cut_nbr, tab);
		else
			ft_check_20_99(nbr, tab);
		return (1);
	}
	ft_putstr(ft_nbr_tostr(c, tab));
	ft_putstr(" ");
	ft_putstr(ft_nbr_tostr("100",tab));
	ft_putstr(" ");
	if (nbr[1] != '0' || nbr[2] != '0')
	{
		if (nbr[1] < '2')
			ft_check_19(++nbr, tab);
		else
			ft_check_20_99(++nbr, tab);
	}
	return (1);
}

int		ft_check_after_1000(char *nbr, t_convert *tab, char *thousand)
{
	char *c;
	int size_of_str;
	int modulo_str;
	char *p;
	
	modulo_str = 0;
	size_of_str = ft_strlen(nbr);
	modulo_str = size_of_str % 3;
	p = malloc(sizeof(char *) * modulo_str);	
	if (ft_strcmp(nbr, "000") == 0)
		return (1);
	if (size_of_str == 3)
	{
		ft_check_100_999(nbr, tab);
		ft_putstr(" ");
		ft_putstr(ft_nbr_tostr(thousand, tab));
		return (1);
	}
	if (size_of_str == 2 && nbr[0] >= '2')
	{
		ft_putstr(" ");
		ft_check_20_99(nbr, tab);
		return (1);
	}
	if ((size_of_str == 2 && nbr[0] < '2')
			|| size_of_str == 1)
	{
		ft_check_19(nbr, tab);
		ft_putstr(" ");
		ft_putstr(ft_nbr_tostr(thousand, tab));
		return (1);
	}
	if (modulo_str == 0)
	{
		ft_strncpy(p, nbr, 3);
		c = ft_cutn(nbr, 3);
	}
	else
	{
		ft_strncpy(p, nbr, modulo_str);
		c = ft_cutn(nbr, modulo_str);
	}
	thousand = ft_get_thousand((size_of_str - 1) / 3);
	ft_check_after_1000(p, tab, thousand);
		ft_putstr(" ");
	if (ft_strlen(c) <= 3)
		thousand = "";
	return (ft_check_after_1000(c, tab, thousand));
}
