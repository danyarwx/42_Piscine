/* ************************************************************************** */
/*	                                                                        */
/*                                                        :::      ::::::::   */
/*   subfunctions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezhang <mezhang@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 21:54:41 by mezhang           #+#    #+#             */
/*   Updated: 2025/05/18 21:54:43 by mezhang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/my_core_bot.h"

void	ft_init_func(void *data);
void	ft_user_loop(void *data);

int	resources_left(t_obj **units)
{
	int	i;

	i = 0;
	while (units[i])
	{
		if (ft_get_nearest_resource(units[i]))
			return (1);
		i++;
	}
	free (units);
	return (0);
}

int	my_counter(t_unit_type typeID)
{
	int		i;
	int		j;
	t_obj	**units;

	i = 0;
	j = 0;
	units = ft_get_my_units();
	while (units[i])
	{
		if (units[i]->s_unit.type_id == typeID)
			j++;
		i++;
	}
	return (j);
}

int	oppo_counter(t_unit_type typeID)
{
	int		i;
	int		j;
	t_obj	**oppo_units;

	i = 0;
	j = 0;
	oppo_units = ft_get_opponent_units();
	while (oppo_units[i])
	{
		if (oppo_units[i]->s_unit.type_id == typeID)
			j++;
		i++;
	}
	return (j);
}

t_obj	*get_nearest_oppo_warrior(t_obj *curr)
{
	t_obj	*enemy_warrior;
	t_obj	**units_oppo;
	int		i;

	i = 0;
	units_oppo = ft_get_opponent_units();
	while (units_oppo[i])
	{
		if (units_oppo[i] == ft_get_nearest_opponent_unit(curr)
			&& units_oppo[i]-> s_unit.type_id == UNIT_WARRIOR)
			enemy_warrior = units_oppo[i];
		else
			enemy_warrior = ft_get_nearest_opponent_unit(curr);
		i++;
	}
	return (enemy_warrior);
}

t_obj	*get_nearest_oppo_worker(t_obj *curr)
{
	t_obj	*enemy_worker;
	t_obj	**units_oppo;
	int		i;

	units_oppo = ft_get_opponent_units();
	i = 0;
	while (units_oppo[i])
	{
		if (units_oppo[i] == ft_get_nearest_opponent_unit(curr)
			&& units_oppo[i]-> s_unit.type_id == UNIT_WORKER)
			enemy_worker = units_oppo[i];
		else
			enemy_worker = ft_get_nearest_opponent_unit(curr);
		i++;
	}
	return (enemy_worker);
}
