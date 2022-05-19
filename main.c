/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmela- <aalmela-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 15:15:59 by aalmela-          #+#    #+#             */
/*   Updated: 2022/05/17 15:31:47 by aalmela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

int	main(int arg, char **args)
{
	t_data	data;

	if (arg < 2)
	{
		put_error(PARAM);
		return (0);
	}
	if (arg == 2)
		make_array(args[1], &data);
	else
	{
		data.size = arg - 1;
		order_array(args, 1, &data);
	}
	clear_memory(&data);
	return (1);
}
