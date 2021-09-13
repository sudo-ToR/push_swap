/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tor <tor@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 13:57:19 by tor               #+#    #+#             */
/*   Updated: 2021/09/13 16:26:01 by tor              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sorting_little(t_push_swap *main)
{
	// int	i;

	while (!is_sorted_in_circle_decres(main->a))
	{
		if (!is_bigger(main->a->table[0], main->a->table[1]))
			swap_a(main);
		else
			break;
	}
}	

void	sorting_a(t_push_swap *main)
{
	// t_int_table	instruc_lst;
	
	if (main->a->len <= 5)
		sorting_little(main);
}