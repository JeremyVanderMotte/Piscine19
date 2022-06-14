/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvander- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 13:07:14 by jvander-          #+#    #+#             */
/*   Updated: 2021/03/10 09:36:32 by jvander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlength(char *str)
{
	unsigned int	cpt;

	cpt = 0;
	while (*(str + cpt) != '\0')
	{
		cpt++;
	}
	return (cpt);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_length;
	unsigned int	src_length;
	unsigned int	cpt;

	cpt = 0;
    
	dest_length = ft_strlength(dest);
	src_length = ft_strlength(src);
    if ((size - dest_length - 1 ) <= 0){
        printf("plop");
        return (dest_length);
    }
    
	while ((*(src + cpt) != '\0') && (cpt < (size - dest_length - 1)))
    {
        *(dest + dest_length + cpt) = *(src + cpt);
        cpt++;
    }
	while (cpt < size)
	{
		*(dest + dest_length + cpt) = '\0';
		cpt++;
	}
    return (src_length + size);
}
           
int main()
{
    unsigned long    p = 4;
    char s1[255] = "patate";
    char s2[255] = "plopi";
    char s3[255] = "patate";
    char s4[255] = "plopi";
    printf("%ld\n", strlcat(s1,s2,p));
    printf("%d\n", ft_strlcat(s3,s4,4));
    printf("%s\n", s1);
    printf("%s\n", s3);
}
