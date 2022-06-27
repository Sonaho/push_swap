/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_ab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmela- <aalmela-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 10:34:42 by aalmela-          #+#    #+#             */
/*   Updated: 2022/05/31 13:30:02 by aalmela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*
push a 
Toma el primer elemento del stack b y lo pone encima del stack a.
No hace nada si b está vacío.
*/
void	pa(t_data *data)
{
	int	a;
	int	b;

	if (!data)
		return ;
	b = data->size_b - 1;
	a = data->size_a - 1;
	if (b == -1)
		return ;
	data->a[a + 1] = data->b[b];
	data->b[b] = 0;
	data->size_a ++;
	data->size_b --;
	print_status(data, "pa");
}

/*
push b
Toma el primer elemento del stack a y lo pone encima del stack b.
No hace nada si a está vacío.
*/
void	pb(t_data *data)
{
	int	a;
	int	b;

	if (!data)
		return ;
	b = data->size_b - 1;
	a = data->size_a - 1;
	if (a == -1)
		return ;
	data->b[b + 1] = data->a[a];
	data->a[a] = 0;
	data->size_a --;
	data->size_b ++;
	print_status(data, "pb");
}
