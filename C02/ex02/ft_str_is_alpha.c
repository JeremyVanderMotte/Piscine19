/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvander- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 14:25:15 by jvander-          #+#    #+#             */
/*   Updated: 2021/03/06 14:59:10 by jvander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int		cpt;
	char	temp;

	cpt = 0;
	while (*(str + cpt) != '\0')
	{
		temp = *(str + cpt);
		if (!((temp <= 'z' && temp >= 'a') || (temp <= 'Z' && temp >= 'A')))
			return (0);
		cpt++;
	}
	return (1);
}
