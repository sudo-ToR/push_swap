/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stats.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tor <tor@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 15:27:07 by tor               #+#    #+#             */
/*   Updated: 2021/09/13 14:40:35 by tor              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_min(t_int_table *to_check)
{
	int	ret;
	int	i;

	i = 0;
	ret = to_check->table[i];
	while (i < to_check->len)
	{
		if (to_check->table[i] < ret)
			ret = to_check->table[i];
		i++;
	}
	return (ret);
}

int	ft_max(t_int_table *to_check)
{
	int	ret;
	int	i;

	i = 0;
	ret = to_check->table[i];
	while (i < to_check->len)
	{
		if (to_check->table[i] > ret)
			ret = to_check->table[i];
		i++;
	}
	return (ret);
}

int	is_med(int to_test, int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		if (tab[i] < to_test)
			j++;
		i++;
	}
	if (j == size / 2)
		return (1);
	return (0);
}

int	ft_median(t_int_table *to_check)
{
	int	i;

	i = 0;
	while (i < to_check->len)
	{
		if (is_med(to_check->table[i], to_check->table, to_check->len))
			return (to_check->table[i]);
		i++;
	}
	return (-1);
}
