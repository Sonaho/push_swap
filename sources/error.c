/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmela- <aalmela-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 10:39:21 by aalmela-          #+#    #+#             */
/*   Updated: 2022/05/17 15:04:37 by aalmela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	put_error(char *str)
{
	ft_putendl_fd(str, 2);
}

void	clear_memory(t_data *data)
{
	if (data->a)
		free(data->a);
	if (data->b)
		free(data->b);
	if (data->temp)
		free(data->temp);
}
