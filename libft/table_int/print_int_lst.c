/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int_lst.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 15:51:14 by marvin            #+#    #+#             */
/*   Updated: 2021/08/21 19:17:50 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	print_int_lst(int *to_print, size_t size)
{
	size_t		i;

	i = 0;
	printf("\t\t=====INT LST=====\n");
	while (i < size)
	{
		printf("index : %ld\t %d \n", i, to_print[i]);
		i++;
	}
}
