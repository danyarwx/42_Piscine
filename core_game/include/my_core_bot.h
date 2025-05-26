/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_core_bot.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezhang <mezhang@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 22:16:53 by mezhang           #+#    #+#             */
/*   Updated: 2025/05/18 22:18:56 by mezhang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_CORE_BOT_H
# define MY_CORE_BOT_H

# include "/core/con_lib.h"
# include <stdio.h>

// your defines here
void	ft_init_func(void *data);
void	ft_user_loop(void *data);
int		resources_left(t_obj **units);
int		my_counter(t_unit_type typeID);
int		oppo_counter(t_unit_type typeID);
void	worker_move(t_obj *curr);
void	warrior_move(t_obj *curr);

#endif
