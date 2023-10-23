/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   corewar_stream_mode.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wmaykit <wmaykit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 05:42:30 by wmaykit           #+#    #+#             */
/*   Updated: 2023/09/01 05:42:30 by wmaykit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "corewar.h"

void	corewar_stream_mode(t_corewar *m_corewar)
{
    g_options |= O_VISU;
    m_corewar->fd = 1;
    packages_init_corewar(m_corewar);
    corewar_core(m_corewar);
    package_winning_player(m_corewar->params->pl_live->order, m_corewar->fd);
    package_end_game(m_corewar->fd);
}