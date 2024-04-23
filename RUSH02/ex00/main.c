/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 13:48:18 by fvizcaya          #+#    #+#             */
/*   Updated: 2024/02/24 13:48:19 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "main.h"

int	main(int argc, char *argv[])
{
	t_node	*my_dictionary;
	char	buffer[_BUFFER_SIZE_];
	char	key_buff[_KV_SIZE_];
	char	value_buff[_KV_SIZE_];

	parse_args(argc, argv);
	my_dictionary = ft_create_dictionary();
	ft_read_file(buffer);
	ft_parse_buffer(buffer, key_buff, value_buff);
	ft_print_tree(my_dictionary);
	ft_destroy_dictionary(my_dictionary);
}
/*
int	parse_args(int anum, char **alist)
{

}
*/