/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvander- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 15:44:45 by jvander-          #+#    #+#             */
/*   Updated: 2021/03/11 16:07:47 by jvander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		cpt;

	cpt = 0;
	while (*(str + cpt) != '\0')
	{
		ft_putchar(*(str + cpt));
		cpt++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	int		cpt;

	cpt = 1;
	while (cpt < argc)
	{
		ft_putstr(argv[cpt]);
		cpt++;
	}
	return (0);
}
