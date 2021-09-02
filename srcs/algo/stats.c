/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stats.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tor <tor@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 15:27:07 by tor               #+#    #+#             */
/*   Updated: 2021/09/02 16:09:36 by tor              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_min(int *tab, int size)
{
	int ret;
	int	i;

	i = 0;
	ret = tab[i];
	while (i < size)
	{
		if (tab[i] < ret)
			ret = tab[i];
		i++;
	}
	return (ret);
}

int	ft_max(int *tab, int size)
{
	int ret;
	int	i;

	i = 0;
	ret = tab[i];
	while (i < size)
	{
		if (tab[i] > ret)
			ret = tab[i];
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

int	ft_median(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (is_med(tab[i], tab, size))
			return (tab[i]);
		i++;
	}
	return (-1);
}
