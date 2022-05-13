/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_array.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmela- <aalmela-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 10:57:54 by aalmela-          #+#    #+#             */
/*   Updated: 2022/05/13 14:36:16 by aalmela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	make_array(char *params)
{
	char	**arr;

	if (!params)
		put_error(PARAM);
	arr = ft_split(params, ' ');
	order_array(arr, 0);
}

void	order_array(char **params, int position)
{
	int	i;
	int	*arr_i;

	if (!params)
		put_error(PARAM);
	arr_i = transform_array(params, position);
	i = position - 1;
	while (arr_i[++i])
	{
		ft_putnbr_fd(arr_i[i], 1);
		ft_putchar_fd('\n', 1);
	}
}

int	*transform_array(char **params, int position)
{
	int	*dest;
	int	i;
	int	j;

	i = position - 1;
	while (params[++i])
	{
		j = -1;
		while (params[i][++j] != '\0')
		{
			ft_putchar_fd(params[i][j], 1);
			if (!ft_isdigit((int)params[i][j]))
				put_error(NODIGIT);
		}
	}
	dest = (int *)ft_calloc(i + 1, sizeof(int *));
	if (!dest)
		put_error("Error: Can't create array [transform_array]");
	i = -1;
	while (params[++i])
	{
		dest[i] = ft_atoi(params[i]);
	}
	return (dest);
}
