/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comparisons_stack.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tor <tor@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 14:10:18 by tor               #+#    #+#             */
/*   Updated: 2021/09/15 15:58:39 by tor              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted_in_circle_cres(t_int_table *to_check)
{
	int	min;
	int	max;
	int	i;

	if (to_check->len == 0)
		return (1);
	min = ft_min(to_check);
	max = ft_max(to_check);
	if (to_check->table[0] == min)
		return (is_descending(to_check));
	i = 0;
	while (i < to_check->len - 1)
	{
		if (to_check->table[i] == min && to_check->table[i + 1] != max)
			return (0);
		else if (to_check->table[i] != min
			&& is_bigger(to_check->table[i], to_check->table[i + 1]))
			return (0);
		i++;
	}
	return (1);
}

int	is_sorted_in_circle_decres(t_int_table *to_check)
{
	int	min;
	int	max;
	int	i;

	if (to_check->len == 0)
		return (1);
	min = ft_min(to_check);
	max = ft_max(to_check);
	if (to_check->table[0] == min)
		return (is_descending(to_check));
	if (last_in_table(to_check) > to_check->table[0])
		return (0);
	i = 0;
	while (i < to_check->len - 1)
	{
		if (to_check->table[i] == max && to_check->table[i + 1] != min)
			return (0);
		else if (to_check->table[i] != max
			&& !is_bigger(to_check->table[i], to_check->table[i + 1]))
			return (0);
		i++;
	}
	return (1);
}
