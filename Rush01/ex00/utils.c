/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameunier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 12:38:22 by ameunier          #+#    #+#             */
/*   Updated: 2021/03/13 14:09:10 by ameunier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while(*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_argv_char_to_int(char *argv, int *argv_int)
{
	while(*argv)
	{
		if (*argv != ' ')
		{
			*argv_int = *argv - '0';
			argv_int++;
		}
		argv++;
	}
}
