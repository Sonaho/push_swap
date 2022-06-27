/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmela- <aalmela-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 17:31:30 by aalmela-          #+#    #+#             */
/*   Updated: 2022/06/22 18:04:46 by aalmela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*
SORT
Toma la lista y la divide en paquetes. Ej: lista de 100 la divide entre 5 
paquetes Se tratan los paquetes de menor a mayor, el 1er paquete seria del 
1 al 20, el segundo del 21 al 40, etc..
Cada vez que se detecta un valor del paquete se hace un push_ab y si es el 
segundo valor se evalua si el valor está por encima de su media o por debajo,
si el valor es superior:
Paquete 1 = valor de 1 a 20, media 10 si el valor es de 11 a 20 van debajo, 
si es de 1 a 10 van encima creando una estructura de reloj de arena.
Cuando se ha llevado todo a la columna B se buscan de menor a mayor 
ordenados y se hace un push_a
*/
void	sort(t_data *data)
{
	if (data == NULL)
		return ;
	else if (data->size == 1)
		return ;
	else if (data->size_a == 2)
	{
		if (data->a[0] < data->a[1])
			sa(data);
		return ;
	}
	else if (data->size <= 3)
		sort_less_four(data);
	else if (data->size <= 5)
		sort_less_six(data);
	else
		sort_bigger(data);
	return ;
}

void	sort_less_four(t_data *data)
{
	if (data == NULL)
		return ;
	if (data->a[0] < data->a[1] && data->a[1] > data->a[2]
		&& data->a[0] < data->a[2])
	{
		sa(data);
	}
}

void	sort_less_six(t_data *data)
{
	if (data == NULL)
		return ;
}

void	sort_bigger(t_data *data)
{
	if (data == NULL)
		return ;
}
