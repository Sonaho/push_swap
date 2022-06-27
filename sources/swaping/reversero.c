/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reversero.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmela- <aalmela-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 10:35:14 by aalmela-          #+#    #+#             */
/*   Updated: 2022/05/31 13:35:29 by aalmela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*
reverse rotate a 
Desplaza hacia abajo todos los elementos del stack a una
posición, de forma que el último elemento se convierte en el primero.
*/
void	rra(t_data *data)
{
	int	a;
	int	i;
	int	tmp;
	int	tmp2;

	a = 0;
	i = data->size_a;
	if (i <= 0)
		return ;
	while (--i > a)
	{
		if (i == data->size_a - 1)
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
	print_status(data, "rra");
}

/*
reverse rotate b 
Desplaza hacia abajo todos los elementos del stack b una
posición, de forma que el último elemento se convierte en el primero.
*/
void	rrb(t_data *data)
{
	int	b;
	int	i;
	int	tmp;
	int	tmp2;

	b = 0;
	i = data->size_b;
	if (i <= 0)
		return ;
	while (--i > b)
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
	print_status(data, "rrb");
}

void	rrr(t_data *data)
{
	rra(data);
	rrb(data);
}
