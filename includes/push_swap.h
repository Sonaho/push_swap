/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmela- <aalmela-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 15:16:25 by aalmela-          #+#    #+#             */
/*   Updated: 2022/05/19 11:14:23 by aalmela-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "libft/libft.h"

# define PARAM "Error: Wrong parameters"
# define NODIGIT "Error: some param isn't digit"
# define CANTCREATEARRAY "Error: Can't create array"
# define DUPLICATE "Error: duplicate numbers"
# define EMPTYARR "Error: pointer is null"

typedef struct s_data
{
	int		*a;
	int		*b;
	int		*temp;
	int		moves;
	int		size;
	int		size_a;
	int		size_b;
}	t_data;

void	put_error(char *str);
void	order_array(char **params, int position, t_data *data);
void	make_array(char *params, t_data *data);
int		*transform_array(char **params, int position);
void	swap(int *arr, int x, int y);
void	asign_values(t_data *data);
void	clear_memory(t_data *data);
int		calculatesize(char **arr);
void	sa(t_data *data);
void	sb(t_data *data);
void	ss(t_data *data);
void	pa(t_data *data);
void	pb(t_data *data);
void	ra(t_data *data);
void	rb(t_data *data);
void	rr(t_data *data);
void	rra(t_data *data);
void	rrb(t_data *data);
void	rrr(t_data *data);
#endif