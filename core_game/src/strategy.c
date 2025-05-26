/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strategy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezhang <mezhang@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 21:54:23 by mezhang           #+#    #+#             */
/*   Updated: 2025/05/18 22:08:08 by mezhang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/my_core_bot.h"

void	worker_move(t_obj *curr)
{
	t_obj	*obj_resource;
	t_obj	*enemy;

	obj_resource = ft_get_nearest_resource(curr);
	enemy = ft_get_nearest_opponent_unit(curr);
	if (curr->s_unit.type_id == UNIT_WORKER)
	{
		if (obj_resource)
			ft_travel_attack(curr, obj_resource);
		else if (enemy)
			ft_travel_attack(curr, enemy);
	}
}

void	warrior_move(t_obj *curr)
{
	t_obj	*enemy_core;
	t_obj	*obj_resource;
	t_obj	*enemy;

	obj_resource = ft_get_nearest_resource(curr);
	enemy = ft_get_nearest_opponent_unit(curr);
	enemy_core = ft_get_first_opponent_core();
	if (curr->s_unit.type_id == UNIT_WARRIOR)
	{
		if (enemy)
			ft_travel_attack(curr, enemy);
		else if (ft_distance(enemy, ft_get_nearest_unit(obj_resource))
			< ft_distance(enemy, curr))
			ft_travel_attack(curr, enemy);
		else if (enemy == NULL)
			ft_travel_attack(curr, enemy_core);
	}
}
