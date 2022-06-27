/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotates.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmela- <aalmela-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 10:35:24 by aalmela-          #+#    #+#             */
/*   Updated: 2022/05/31 13:38:39 by aalmela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*
rotate a
Desplaza hacia arriba todos los elementos del stack a una posición,
de forma que el primer elemento se convierte en el último.
*/
void	ra(t_data *data)
{
	int	a;
	int	i;
	int	tmp;
	int	tmp2;

	if (!data)
		return ;
	a = data->size_a - 1;
	i = -1;
	while (++i < a)
	{
		if (i == 0)
		{
			tmp = data->a[i];
			data->a[i] = data->a[a];
		}
		else
		{
			tmp2 = data->a[i];
			data->a[i] = tmp;
			tmp = tmp2;
		}
	}
	data->a[i] = tmp;
	print_status(data, "ra");
}

/*
rotate b
Desplaza hacia arriba todos los elementos del stack b una posición,
de forma que el primer elemento se convierte en el último.
*/
void	rb(t_data *data)
{
	int	b;
	int	i;
	int	tmp;
	int	tmp2;

	if (!data)
		return ;
	b = data->size_b - 1;
	i = -1;
	while (++i < b)
	{
		if (i == 0)
		{
			tmp = data->b[i];
			data->b[i] = data->b[b];
		}
		else
		{
			tmp2 = data->b[i];
			data->b[i] = tmp;
			tmp = tmp2;
		}
	}
	data->b[i] = tmp;
	print_status(data, "rb");
}

void	rr(t_data *data)
{
	ra(data);
	rb(data);
}
