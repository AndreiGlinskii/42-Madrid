/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funciones.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglinski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 18:24:49 by aglinski          #+#    #+#             */
/*   Updated: 2024/02/18 18:24:56 by aglinski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCIONES_H
# define FUNCIONES_H

void	ft_putnbr(int nbr);
void	ft_putwrite(char c);
void	ft_putstr(char *str);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
int		*get_numbers(char *str);
int		check(int ac, char **av);
int		check_double(int tab[4][4], int pos, int num);
int		check_case(int tab[4][4], int pos, int entry[16]);
int		check_col_up(int tab[4][4], int pos, int entry[16]);
int		check_col_down(int tab[4][4], int pos, int entry[16]);
int		check_row_right(int tab[4][4], int pos, int entry[16]);
int		check_row_left(int tab[4][4], int pos, int entry[16]);

#endif