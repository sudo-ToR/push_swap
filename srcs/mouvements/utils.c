/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 15:03:06 by marvin            #+#    #+#             */
/*   Updated: 2021/08/25 15:12:31 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	up_one(int *stack, int size)
{
	int	i;

	i = 1;
	while (i < size)
	{
		stack[i - 1] = stack[i];
		i++;
	}
}

void	down_one(int *stack, int size)
{
	int	i;

	i = 0;
	while (i + 1 < size)
	{
		stack[i + 1] = stack[i];
		i++;
	}
}