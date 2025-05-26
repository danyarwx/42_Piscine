/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezhang <mezhang@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 21:54:13 by mezhang           #+#    #+#             */
/*   Updated: 2025/05/18 22:16:28 by mezhang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/my_core_bot.h"

int	main(int argc, char **argv)
{
	int	won;

	ft_init_con("mezhang", &argc, argv);
	won = ft_loop(&ft_init_func, &ft_user_loop, NULL, NULL);
	ft_close_con();
	if (won)
		return (0);
	return (1);
}

void	ft_init_func(void *data)
{
	(void)data;
	printf("Init CORE Bot\n");
	ft_create_unit(UNIT_WORKER);
}

void	spawn(t_obj *curr)
{
	t_obj	*obj_resource;

	obj_resource = ft_get_nearest_resource(curr);
	if (my_counter(UNIT_WORKER) < 4 && obj_resource)
	{
		ft_create_unit(UNIT_WORKER);
		if (oppo_counter(UNIT_WARRIOR) > 0)
			ft_create_unit(UNIT_WARRIOR);
	}
	else
	{
		ft_create_unit(UNIT_WARRIOR);
		if (obj_resource == NULL)
		{
			ft_create_unit(UNIT_WARRIOR);
			ft_create_unit(UNIT_WARRIOR);
		}
	}
	while (my_counter(UNIT_WORKER) == 0)
	{
		ft_create_unit(UNIT_WARRIOR);
	}
}

void	ft_user_loop(void *data)
{
	int		i;
	t_obj	**units;
	t_obj	*curr;

	(void)data;
	i = 0;
	units = ft_get_my_units();
	while (units[i])
	{
		curr = units[i];
		spawn(units[i]);
		worker_move(curr);
		warrior_move(curr);
		i++;
	}
	free(units);
}
