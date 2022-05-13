/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalmela- <aalmela-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 15:16:25 by aalmela-          #+#    #+#             */
/*   Updated: 2022/05/13 14:07:14 by aalmela-         ###   ########.fr       */
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

typedef struct s_data
{
	char	*a;
	char	*b;
	char	*temp;
}	t_data;

void	put_error(char *str);
void	order_array(char **params, int position);
void	make_array(char *params);
int		*transform_array(char **params, int position);
#endif