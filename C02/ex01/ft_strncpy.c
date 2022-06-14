/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvander- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 14:23:22 by jvander-          #+#    #+#             */
/*   Updated: 2021/03/07 15:15:36 by jvander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned	int	cpt;

	cpt = 0;
	while (*(src + cpt) != '\0' && cpt < n)
	{
		*(dest + cpt) = *(src + cpt);
		cpt++;
	}
	while (cpt < n)
	{
		*(dest + cpt) = '\0';
		cpt++;
	}
	return (dest);
}
