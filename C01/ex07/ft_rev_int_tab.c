/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aglinski <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 18:21:11 by aglinski          #+#    #+#             */
/*   Updated: 2024/02/14 18:21:13 by aglinski         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)

{
	int	i;
	int	a;
	int	que;

	i = size - 1;
	a = 0;
	while (a < i)
	{
		que = tab[a];
		tab[a] = tab[i];
		tab[i] = que;
		a++;
		i--;
	}
}
