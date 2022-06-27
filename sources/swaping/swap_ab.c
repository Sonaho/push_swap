/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_ab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmela- <aalmela-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 10:35:32 by aalmela-          #+#    #+#             */
/*   Updated: 2022/06/22 17:28:30 by aalmela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*
swap a
intercambia los dos primeros elementos encima del stack a. No hace
nada si hay uno o menos elementos.
*/
void	sa(t_data *data)
{
	int	a;

	if (!data)
		return ;
	a = data->size_a - 1;
	if (a > 0)
		swap(data->a, a, a - 1);
	print_status(data, "sa");
}

/*
swap b
intercambia los dos primeros elementos encima del stack b. No hace
nada si hay uno o menos elementos.
*/
void	sb(t_data *data)
{
	int	b;

	if (!data)
		return ;
	b = data->size_b - 1;
	if (b > 1)
		swap(data->b, b, b - 1);
	print_status(data, "sb");
}

/*
swap a y swap b a la vez.
*/
void	ss(t_data *data)
{
	sa(data);
	sb(data);
}
