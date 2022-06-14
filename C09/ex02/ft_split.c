/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvander- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 18:16:35 by jvander-          #+#    #+#             */
/*   Updated: 2021/03/25 08:56:58 by jvander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_sep(char *charset, char c)
{
	int		cpt;

	cpt = 0;
	while (*(charset + cpt) != '\0')
	{
		if (*(charset + cpt) == c)
			return (1);
		cpt++;
	}
	return (0);
}

int		ft_count_words(char *str, char *charset)
{
	int		cpt;
	int		count;

	count = 0;
	cpt = 0;
	while (*(str + cpt) != '\0')
	{
		if (!ft_is_sep(charset, *(str + cpt)))
		{
			cpt++;
			count++;
		}
		while (!ft_is_sep(charset, *(str + cpt)))
		{
			if (*(str + cpt) == '\0')
				return (count);
			cpt++;
		}
		cpt++;
	}
	return (count);
}

int		ft_wordlen(char *str, char *charset)
{
	int		cpt;

	cpt = 0;
	while (*(str + cpt) != '\0' && !ft_is_sep(charset, *(str + cpt)))
		cpt++;
	return (cpt);
}

char	*ft_strncpy(char *str, int size)
{
	char	*to_ret;

	if (!(to_ret = malloc(sizeof(char ) * (size + 1))))
		return (NULL);
	*(to_ret + size) = '\0';
	size--;
	while (size >= 0)
	{
		*(to_ret + size) = *(str + size);
		size--;
	}
	return (to_ret);
}

char	**ft_split(char *str, char *charset)
{
	char	**to_ret;
	int		nbr_words;
	int		cpt;
	int		size_word;
	int		count;

	nbr_words = ft_count_words(str, charset);
	if (!(to_ret = malloc(sizeof(char*) * (nbr_words + 1))))
		return (NULL);
	cpt = 0;
	count = 0;
	while (*(str + cpt) != '\0')
	{
		while (*(str + cpt) != '\0' && ft_is_sep(charset, *(str + cpt)))
			cpt++;
		size_word = ft_wordlen(str + cpt, charset);
		*(to_ret + count++) = ft_strncpy((str + cpt), size_word);
		cpt += size_word;
	}
	to_ret[nbr_words] = 0;
	return (to_ret);
}
