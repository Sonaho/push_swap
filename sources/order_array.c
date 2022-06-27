/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_array.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmela- <aalmela-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 10:57:54 by aalmela-          #+#    #+#             */
/*   Updated: 2022/05/30 12:26:57 by aalmela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	make_array(char *params, t_data *data)
{
	char	**arr;

	arr = ft_split(params, ' ');
	data->size = calculatesize(arr);
	order_array(arr, 0, data);
}

void	order_array(char **params, int position, t_data *data)
{
	int		i;

	data->a = transform_array(params, position);
	data->temp = transform_array(params, position);
	data->moves = 0;
	if (!data->temp || !data->a || data->a[0] == '\0')
		put_error(CANTCREATEARRAY);
	i = -1;
	while (++i < data->size)
	{
		if (data->temp[i] == data->temp[i + 1])
			put_error(DUPLICATE);
		else if (data->temp[i] > data->temp[i + 1] && (i + 1) < data->size)
		{
			swap(data->temp, i, i + 1);
			data->moves ++;
		}
		if ((i + 1) == data->size && data->moves > 0)
		{
			i = -1;
			data->moves = 0;
		}
	}
	asign_values(data);
}

void	asign_values(t_data *data)
{
	int	i;
	int	j;

	i = -1;
	while (++i < data->size)
	{
		j = 0;
		while (data->a[j] != data->temp[i])
			j ++;
		data->a[j] = (i + 1);
	}
	i = -1;
	while (++i < data->size)
		data->temp[i] = i;
	data->size_a = data->size;
	data->size_b = 0;
	data->b = ft_calloc(data->size, sizeof(int *));
}
