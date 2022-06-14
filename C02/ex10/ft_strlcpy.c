/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvander- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 17:36:20 by jvander-          #+#    #+#             */
/*   Updated: 2021/03/08 17:02:04 by jvander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_str_len(char *src)
{
	unsigned int	cpt;

	cpt = 0;
	while (*(src + cpt) != '\0')
	{
		cpt++;
	}
	return (cpt);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	cpt;
	unsigned int	src_length;

	src_length = ft_str_len(src);
	cpt = 0;
	while (cpt < n - 1 && *(src + cpt) != '\0')
	{
		*(dest + cpt) = *(src + cpt);
		cpt++;
	}
    if (n > 0)
        *(dest + cpt) = '\0';
	return (src_length);
}

int main()
{
    unsigned long p = 4;
    char s1[255] = "patate";
    char s2[255] = "0dcbsidwhiu";
    char s3[255] = "patate";
    char s4[255] = "0dcbsidwhiu";
    printf("%d\n", ft_strlcpy(s1,s2,4));
    printf("%lu\n", strlcpy(s3,s4,p));
    printf("%s\n", s1);
    printf("%s\n", s3);
    printf("%d\n", strcmp(s1,s3));
    return (0);
}

