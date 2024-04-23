/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvizcaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 13:47:45 by fvizcaya          #+#    #+#             */
/*   Updated: 2024/02/24 13:47:56 by fvizcaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#define _FILENAME_ "numbers.dict"
#define _BUFFER_SIZE_ 1024
#define _KV_SIZE_ 64
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/uio.h>
#include <sys/types.h>
#include "dictionary.h"

int	parse_args(int anum, char **alist);