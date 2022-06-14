/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvander- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 09:06:09 by jvander-          #+#    #+#             */
/*   Updated: 2021/03/21 20:11:29 by jvander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdlib.h>
int		main(int argc, char **argv)
{
    t_convert *tab;
    
    tab = malloc(sizeof(t_convert*) * 200);
    
    tab[0].value = "0";
    tab[0].str = "zero";
    tab[1].value = "1";
    tab[1].str = "one";
    tab[2].value = "2";
    tab[2].str = "two";
    tab[3].value = "3";
    tab[3].str = "three";
    tab[4].value = "4";
    tab[4].str = "four";
    tab[5].value = "5";
    tab[5].str = "five";
    tab[6].value = "6";
    tab[6].str = "six";
    tab[7].value = "7";
    tab[7].str = "seven";
    tab[8].value = "8";
    tab[8].str = "eight";
    tab[9].value = "9";
    tab[9].str = "nine";
    tab[10].value = "10";
    tab[10].str = "ten";
    tab[11].value = "11";
    tab[11].str = "eleven";
    tab[12].value = "12";
    tab[12].str = "twelve";
    tab[13].value = "13";
    tab[13].str = "thirteen";
    tab[14].value = "14";
    tab[14].str = "fourteen";
    tab[15].value = "15";
    tab[15].str = "fifteen";
    tab[16].value = "16";
    tab[16].str = "sixteen";
    tab[17].value = "17";
    tab[17].str = "seventeen";
    tab[18].value = "18";
    tab[18].str = "eighteen";
    tab[19].value = "19";
    tab[19].str = "nineteen";
    tab[20].value = "20";
    tab[20].str = "twenty";
    tab[21].value = "30";
    tab[21].str = "thirty";
    tab[22].value = "40";
    tab[22].str = "forty";
    tab[23].value = "50";
    tab[23].str = "fifty";
    tab[24].value = "60";
    tab[24].str = "sixty";
    tab[25].value = "70";
    tab[25].str = "seventy";
    tab[26].value = "80";
    tab[26].str = "eigthy";
    tab[27].value = "90";
    tab[27].str = "ninety";
    tab[28].value = "100";
    tab[28].str = "hundred";
    tab[29].value = "1000";
    tab[29].str = "thousand";
    tab[30].value = "1000000";
    tab[30].str = "million";
    tab[31].value = "1000000000";
    tab[31].str = "billion";
    tab[32].value = "1000000000000";
    tab[32].str = "trillion";
    tab[33].value = "1000000000000000";
    tab[33].str = "qudrillon";
	tab[34].str = 0;
	char			*dict_to_use;
	char			*str_nbr;

	if (!ft_check_nbr_param(argc))
	{
		ft_putstr("Error : Invalid number arguments\n");
		return (1);
	}
	str_nbr = (argc == 2) ? argv[1] : argv[2];
	if (!ft_check_is_correct_str(str_nbr))
	{
		ft_putstr("Error\n");
		return (2);
	}
	dict_to_use = (argc == 2) ? "numbers.dict" : argv[1];
ft_check_after_1000(str_nbr, tab, "");	
	return (0);
}
