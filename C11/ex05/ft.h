/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvander- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 13:24:21 by jvander-          #+#    #+#             */
/*   Updated: 2021/03/25 10:33:39 by jvander-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

void	ft_putchar(char c);
void	ft_putstr(char *c);
int		ft_addition(char *nbr1, char *nbr2);
int		ft_substraction(char *nbr1, char *nbr2);
int		ft_multiplication(char *nbr1, char *nbr2);
int		ft_division(char *nbr1, char *nbr2);
int		ft_modulo(char *nbr1, char *nbr2);
int		ft_check_operator(char op);
int		ft_strlen(char *str);
int		ft_atoi(char *str);
void	ft_putnbr(int nbr);
void	ft_do_op(char *nbr1, char *nbr2, char *op);
int		ft_calculate(char *a, char *b, int (*f)(char*, char*));
#endif
