/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvander- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 15:11:41 by jvander-          #+#    #+#             */
/*   Updated: 2021/03/08 15:40:39 by jvander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int		cpt;
	char	temp;

	cpt = 0;
	while (*(str + cpt) != '\0')
	{
		temp = *(str + cpt);
		if (temp >= 'a' && temp <= 'z')
			*(str + cpt) = temp - 32;
		cpt++;
	}
	return (str);
}
