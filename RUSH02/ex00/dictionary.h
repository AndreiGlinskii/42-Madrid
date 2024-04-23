/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 18:28:35 by fvizcaya          #+#    #+#             */
/*   Updated: 2024/02/24 18:33:27 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct node
{
	char			*keyword;
	char			*value;
	struct t_node	*left;
	struct t_node	*right;
}	t_node;

void	ft_read_file(char *buffer);
t_node	*ft_create_dictionary(void);
t_node	*ft_create_dictionary_node(char *keyword, char *value);
void	ft_parse_buffer(char *buffer, char *key_buff, char *value_buff);