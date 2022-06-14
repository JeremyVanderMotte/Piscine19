/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_format_argv.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvander- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 15:25:31 by jvander-          #+#    #+#             */
/*   Updated: 2021/03/14 09:28:59 by ameunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_argv(char *str, char nbr)
{
	int i;
	int count_nbr;

	count_nbr = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > nbr || str[i] < '1') && (str[i] != ' '))
			return (0);
		if (str[i] >= '1' && str[i] <= nbr)
			count_nbr++;
		i++;
	}
	if (count_nbr / (nbr - '0') != (nbr - '0'))
		return (0);
	return (1);
}
