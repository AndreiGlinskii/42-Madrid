/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 19:36:26 by fvizcaya          #+#    #+#             */
/*   Updated: 2024/02/24 19:36:28 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"
#include "dictionary.h"

void	ft_read_file(char *buffer)
{
	int		fd;
	int		is_error;
	int		pos;
	int		i;

	i = 0;
	fd = open(_FILENAME_, O_RDONLY);
	is_error = read(fd, buffer, 1024);
}

t_node	*ft_create_dictionary(void)
{
	t_node	g_root_node;

	g_root_node.keyword = NULL;
	g_root_node.value = NULL;
	g_root_node.left = NULL;
	g_root_node.right = NULL;
	return (&g_root_node);
}

t_node	*ft_create_dictionary_node(char *keyword, char *value)
{
	int		i;
	int		j;
	t_node	*new_node;

	new_node = (t_node *) malloc(sizeof (t_node));
	new_node->keyword = (char *) malloc(_KV_SIZE_ * sizeof(char));
	new_node->value = (char *) malloc(_KV_SIZE_ * sizeof(char));
	new_node->keyword = keyword;
	new_node->value = value;
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);
}

void	ft_destroy_dictionary(t_node *my_dictionary)
{
	if (my_dictionary != NULL)
	{
		ft_destroy_dictionary(my_dictionary->left);
		ft_destroy_dictionary(my_dictionary->right);
		free(my_dictionary);
	}
}

void	ft_parse_buffer(char *buffer, char *key_buff, char *value_buff)
{
	int		i;

	i = 0;
	while (buffer[i] != '\0 ')
	{
		if (buffer[i] >= '0' && buffer[i] <= '9')
			key_buff[i] = buffer[i];
		i++;
	}
	while (buffer[i] != '\0' && (buffer[i] == ':' || buffer[i] == ' '))
		i++;
	while (buffer[i] != '\0' && buffer[i] != '\n')
	{
		if (buffer[i] >= ' ' && buffer[i] <= '~')
			key_buff[i] = buffer[i];
		i++;
	}
	ft_create_dictionary_node(key_buff, value_buff);
}
