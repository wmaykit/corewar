/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_not_valid.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwitting <cwitting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 16:10:31 by cwitting          #+#    #+#             */
/*   Updated: 2020/05/22 19:56:27 by cwitting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

int			file_not_valid(char *filename)
{
	int		fd;
	char	arr[1];

	fd = open(filename, O_RDONLY);
	if (fd < 0 || read(fd, arr, 1) != 1 || errno)
	{
		close(fd);
		return (1);
	}
	close(fd);
	return (0);
}
