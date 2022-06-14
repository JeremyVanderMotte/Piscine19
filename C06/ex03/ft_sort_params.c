/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvander- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 15:57:00 by jvander-          #+#    #+#             */
/*   Updated: 2021/03/12 15:37:49 by jvander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	int		cpt;

	cpt = 0;
	while (*(s1 + cpt) == *(s2 + cpt))
	{
		if (*(s1 + cpt) == '\0')
			return (0);
		cpt++;
	}
	return (*(s1 + cpt) - *(s2 + cpt));
}

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

void	ft_swap(char **str1, char **str2)
{
	char	*temp;

	temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

int		main(int argc, char **argv)
{
	char	*tab[argc];
	int		cpt;
	int		cpt2;

	cpt = 1;
	while (cpt < argc)
	{
		tab[cpt] = argv[cpt];
		cpt++;
	}
	cpt = 1;
	while (cpt < argc)
	{
		cpt2 = cpt + 1;
		while (cpt2 < argc)
		{
			if (ft_strcmp(tab[cpt], tab[cpt2]) > 0)
				ft_swap(&tab[cpt], &tab[cpt2]);
			cpt2++;
		}
		ft_putstr(tab[cpt]);
		cpt++;
	}
	return (0);
}
