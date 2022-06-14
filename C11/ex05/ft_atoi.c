/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvander- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 18:32:03 by jvander-          #+#    #+#             */
/*   Updated: 2021/03/24 15:09:05 by jvander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isspace(char c)
{
	if (c == '\t')
		return (1);
	if (c == '\v' || c == '\r' || c == '\f' || c == '\n' || c == ' ')
		return (1);
	return (0);
}

int		ft_isminusplus(char c)
{
	return (c == '+' || c == '-');
}

int		ft_isminus(char c)
{
	return (c == '-');
}

int		ft_isnbr(char c)
{
	return (c >= '0' && c <= '9');
}

int		ft_atoi(char *str)
{
	int		cpt;
	int		res;
	int		negative;

	negative = 1;
	res = 0;
	cpt = 0;
	while (ft_isspace(*(str + cpt)))
	{
		cpt++;
	}
	while (ft_isminusplus(*(str + cpt)))
	{
		if (ft_isminus(*(str + cpt)))
			negative *= -1;
		cpt++;
	}
	while (ft_isnbr(*(str + cpt)))
	{
		res *= 10;
		res += *(str + cpt) - 48;
		cpt++;
	}
	return (res * negative);
}
