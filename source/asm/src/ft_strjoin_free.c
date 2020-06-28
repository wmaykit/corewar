/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwitting <cwitting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 04:18:36 by cwitting          #+#    #+#             */
/*   Updated: 2020/05/24 04:18:43 by cwitting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

char		*ft_strjoin_free(char *s1, char const *s2)
{
	char	*s;

	if (!s1 || !s2 ||
		!(s = (char*)ft_memalloc(sizeof(char) * (ft_strlen(s1) +
		ft_strlen(s2) + 1))))
		return (0);
	ft_strcpy(s, s1);
	ft_strcat(s, s2);
	ft_memdel((void**)&s1);
	return (s);
}
