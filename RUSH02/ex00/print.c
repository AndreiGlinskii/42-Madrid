/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 14:18:28 by fvizcaya          #+#    #+#             */
/*   Updated: 2024/02/25 14:18:30 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "main.h"
#include "dictionary.h"
#include "print.h"

void	ft_print_tree(t_node *tree)
{
	if (tree != NULL)
	{
		ft_print_tree(tree->left);
		ft_putstr(tree->keyword);
		write(1, " : ", 3);
		ft_putstr(tree->value);
		write(1, "\n", 1);
		ft_print_tree(tree->right);
	}
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, *str, 1);
		str++;
	}
}
