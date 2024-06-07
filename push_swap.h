/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 10:11:44 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/06/07 15:41:03 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "./Libft/libft.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>

//int		main(int argc, char **argv);
void	pa(t_list **stack_a, t_list **stack_b);
void	pb(t_list **stack_a, t_list **stack_b);
void	rra(t_list **stack, int check);
void	rrb(t_list **stack, int check);
void	rrr(t_list **stack_a, t_list **stack_b);
void	sa(t_list **stack, int check);
void	sb(t_list **stack, int check);
void	ss(t_list **stack_a, t_list **stack_b);
void	free_list(t_list *stack);
t_list	*initialize_stack(char **argv);
bool	is_sorted(t_list *head);
bool	string_error(char *str);
bool	check_duplicate(t_list *head, long n);

#endif