/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tor <tor@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 13:57:19 by tor               #+#    #+#             */
/*   Updated: 2021/09/08 16:08:31 by tor              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	create_mvt_lst()
{

}

void	select_mvt_lst(t_push_swap *main)
{
	create_mvt_lst(main);
	if (main->len_mvt == 1)
		return;
}

void	sorting_a(t_push_swap *main)
{
	while (!is_sorted_lst(main->a, main->len_a) || main->len_b)
	{
		if (main->len_b < 2)
			push_b(main);
		create_mvt_lst(main);
	}
}