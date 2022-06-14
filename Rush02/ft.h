/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvander- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 09:15:12 by jvander-          #+#    #+#             */
/*   Updated: 2021/03/21 19:17:05 by jvander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

typedef struct	s_convert
{
	char			*value;
	char			*str;
}				t_convert;

void			ft_putchar(char c);
void			ft_putstr(char *str);
unsigned int	ft_atoi(char *str);
void			ft_convert(unsigned int nbr);
int				ft_check_nbr_param(int argc);
int				ft_check_is_correct_str(char *str);
int				ft_is_nbr(char c);
int				ft_strcmp(char *s1, char *s2);
char			*ft_nbr_tostr(char *nbr, t_convert *tab);
int				ft_strlen(char *str);
int				ft_check_error(char *nbr);
char			*ft_cutn(char *nbr, int n);
char			*ft_get_thousand(int nbr);
int				ft_check_19(char *nbr, t_convert *tab);
int				ft_check_20_99(char *nbr, t_convert *tab);
int				ft_check_100_999(char *nbr, t_convert *tab);
int				ft_check_after_1000(char *nbr, t_convert *tab, char *thousand);
char			*ft_strncpy(char *dest, char *src, int n);
#endif
