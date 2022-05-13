/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmela- <aalmela-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 15:15:59 by aalmela-          #+#    #+#             */
/*   Updated: 2022/05/13 12:32:46 by aalmela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

int	main(int arg, char **args)
{
	if (arg < 2)
	{
		put_error(PARAM);
		return (0);
	}
	if (arg == 2)
		make_array(args[1]);
	else
		order_array(args, 1);
	return (1);
}
