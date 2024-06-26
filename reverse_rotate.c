/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 17:32:13 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/06/26 12:34:07 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_list	*second_last_elem(t_list *stack)
{
	while(stack && stack->next && stack->next->next)
		stack = stack->next;
	return stack;
}

void	rra(t_list **stack, int check)
{
	t_list	*tmp1;
	t_list	*tmp2;

	if(check == 1)
		write(1,"rra\n", 4);
	if(stack != NULL)
	{
		if(*stack && (*stack)->next)
		{
			tmp1 = second_last_elem(*stack);
			tmp2 = tmp1->next;
			tmp1->next = NULL;
			tmp2->next = *stack;
			*stack = tmp2;
		}
	}
}

void	rrb(t_list **stack, int check)
{
	t_list	*tmp1;
	t_list	*tmp2;

	if (check == 1)
		write(1, "rrb\n", 4);
	if(stack != NULL)
	{
		if(*stack && (*stack)->next)
		{
			tmp1 = second_last_elem(*stack);
			tmp2 = tmp1->next;
			tmp1->next = NULL;
			tmp2->next = *stack;
			*stack = tmp2;
		}
	}
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	if(stack_a != NULL && stack_b != NULL)
	{
		rra(stack_a, 0);
		rrb(stack_a, 0);
		write(1, "rrr\n", 4);
	}
}