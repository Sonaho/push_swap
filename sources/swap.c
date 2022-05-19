/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmela- <aalmela-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 10:24:40 by aalmela-          #+#    #+#             */
/*   Updated: 2022/05/17 15:32:15 by aalmela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	swap(int *arr, int x, int y)
{
	int	i;

	i = arr[x];
	arr[x] = arr[y];
	arr[y] = i;
}

int	*transform_array(char **params, int position)
{
	int	i;
	int	j;
	int	*des;

	i = position - 1;
	while (params[++i])
	{
		j = -1;
		while (params[i][++j] != '\0')
		{
			if (!ft_isdigit((int)params[i][j]) && params[i][j] != 45)
				put_error(NODIGIT);
		}
	}
	des = (int *)ft_calloc(i + 1, sizeof(int *));
	if (!des)
		put_error(CANTCREATEARRAY);
	j = -1;
	while (++j < i && params[position + j])
		des[j] = ft_atoi(params[position + j]);
	return (des);
}

int	calculatesize(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
		i ++;
	return (i);
}
