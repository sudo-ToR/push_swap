/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 17:27:16 by lnoirot           #+#    #+#             */
/*   Updated: 2021/08/21 18:53:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

# include <limits.h>

# include "../libft/libft.h"
# include "structure.h"

# define ARRAY_SIZE(arr) (sizeof(arr) / sizeof((arr)[0]))

int		check_number(char *to_check);
char	*concat_table(char **to_concat);

void	create_stack_a(t_push_swap *main, char *arg);

#endif