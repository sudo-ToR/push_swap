/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_size.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnoirot <lnoirot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 17:21:10 by lnoirot           #+#    #+#             */
/*   Updated: 2021/08/20 17:21:32 by lnoirot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	lst_size(t_list *to_count)
{
	int	i;

	if (!to_count)
		return (0);
	i = 1;
	while (to_count->next)
	{
		i++;
		to_count = to_count->next;
	}
	return (i);
}
