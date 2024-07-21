/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 10:11:44 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/07/21 16:08:55 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./Libft/libft.h"
# include <limits.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

// int		main(int argc, char **argv);
void	pa(t_list **stack_a, t_list **stack_b);
void	pb(t_list **stack_a, t_list **stack_b);
void	ra(t_list **stack, int check);
void	rb(t_list **stack, int check);
void	rr(t_list **stack_a, t_list **stack_b);
void	rra(t_list **stack, int check);
void	rrb(t_list **stack, int check);
void	rrr(t_list **stack_a, t_list **stack_b);
void	sa(t_list **stack, int check);
void	sb(t_list **stack, int check);
void	ss(t_list **stack_a, t_list **stack_b);
int		return_error(t_list **stack, char **arguments, int split_flag);
void	initialize_stack(t_list **stack, char **argv, int split_flag);
bool	is_sorted(t_list *head);
bool	string_error(char *str);
bool	check_duplicate(t_list *head, long n);
void	sort_three(t_list **stack);
void	present_location(t_list *stack);
t_list	*find_smallest_number(t_list *stack);
void	determine_price(t_list *stack_a, t_list *stack_b);
void	determine_cheapest(t_list *stack_b);
void	initialize_nodes(t_list *stack_a, t_list *stack_b);
void	stacks_rotation(t_list **stack, t_list *cheapest, char a_or_b);
void	push_nodes_back(t_list **stack_a, t_list **stack_b);
t_list	*find_cheapest_node(t_list *stack);
void	push_swap(t_list **stack_a, t_list **stack_b);
void	free_split(char **arguments);
void	free_stack(t_list **stack);
void	start_sorting(t_list *stack_a, t_list *stack_b);

#endif