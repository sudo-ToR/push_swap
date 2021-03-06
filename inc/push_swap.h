/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tor <tor@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 17:27:16 by lnoirot           #+#    #+#             */
/*   Updated: 2021/09/21 10:05:12 by tor              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

# include <limits.h>

# include "../libft/libft.h"
# include "structure.h"
# include "mouvements.h"
# include "algo.h"

// typedef void (*t_ptr_mvt)(t_push_swap *);

int		check_number(char *to_check);
char	*concat_table(char **to_concat);

void	create_stack(t_push_swap *main, char *arg);
int		is_sorted_lst(int *to_check, int size);
int		has_duplicates(int *to_check, int size);
int		has_only_int(char *arg);
void	parsing(char **to_parse, t_push_swap *main);
void	free_struct_push_swap(t_push_swap *to_free);

void	push_b(t_push_swap *main);
void	push_a(t_push_swap *main);
void	d_rotate(t_push_swap *main);
void	r_drotate(t_push_swap *main);

void	print_stack(t_int_table *a, t_int_table *b);
#endif