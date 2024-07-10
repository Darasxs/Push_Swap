/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 15:09:50 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/07/10 19:07:04 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	write(1, "pb\n", 3);
	if(stack_a != NULL)
	{
		if(*stack_a)
		{
			tmp = *stack_a;
			*stack_a = (*stack_a)->next;
			tmp->next = *stack_b;
			*stack_b = tmp;
		}
	}
}

void	pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;
	
	write(1, "pa\n", 3);
	if(stack_b != NULL)
	{
		if(*stack_a)
		{
			tmp = *stack_b;
			*stack_b = (*stack_b)->next;
			tmp->next = *stack_a;
			*stack_a = tmp;
		}
	}
}
