/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvander- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 15:31:29 by jvander-          #+#    #+#             */
/*   Updated: 2021/03/11 14:23:48 by jvander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_alphanum(char letter)
{
	if ((letter >= 'A' && letter <= 'Z') 
			|| (letter <= 'z' && letter >= 'a')
			|| (letter <= '9' && letter >= '0'))
		return (1);
	return (0);
}

int		ft_is_upper(char letter)
{
	return ((letter >= 'A' && letter <= 'Z'));
}

int		ft_is_lower(char letter)
{
	return ((letter >= 'a' && letter <= 'z'));
}

char	*ft_strcapitalize(char *str)
{
	int flag;
	int cpt;

	flag = 0;
	cpt = 0;
	while (*(str + cpt) != '\0')
	{
		if (ft_is_lower(*(str + cpt)) && !flag)
		{
			*(str + cpt) -= 32;
			flag = 1;
		}
		else if (ft_is_upper(*(str + cpt)) && flag)
			*(str + cpt) += 32;
		else if (!ft_is_alphanum(*(str + cpt)))
			flag = 0;
		else if (ft_is_alphanum(*(str + cpt)) && !flag)
			flag = 1;
		cpt++;
	}
	return (str);
}

int main()
{
	char s1[255] = "Rekt17+Lol Mdr Mdr 4242L42";
	printf("%s\n", ft_strcapitalize(s1));
}
