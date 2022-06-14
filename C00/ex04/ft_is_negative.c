/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvander- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 14:37:52 by jvander-          #+#    #+#             */
/*   Updated: 2021/03/04 14:45:40 by jvander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char character;

	character = 'N';
	if (n < 0)
		write(1, &character, 1);
	else
	{
		character = 'P';
		write(1, &character, 1);
	}
}
