/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 13:44:09 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/07/10 10:51:55 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	match_nodes(t_list *stack_a, t_list *stack_b)
{
	t_list	*target;
	t_list	*tmp;

	while (stack_b)
	{
		target = NULL;
		tmp = stack_a;
		while (tmp)
		{
			if ((target == NULL || tmp->content > target->content)
				&& stack_b->content < tmp->content)
				target = tmp;
			tmp = tmp->next;
		}
		if (target == NULL)
			stack_b->target = find_smallest_number(stack_a);
		else
			stack_b->target = target;
		stack_b = stack_b->next;
	}
}

void	initialize_nodes(t_list *stack_a, t_list *stack_b)
{
	present_location(stack_a);
	present_location(stack_b);
	match_nodes(stack_a, stack_b);
	determine_price(stack_a, stack_b);
	determine_cheapest(stack_b);
}

void	stacks_rotation(t_list **stack, t_list *cheapest, char a_or_b)
{
	while(*stack != cheapest)
	{
		if(a_or_b == 'a')
		{
			if(cheapest->above_medium)
				ra(stack, 1);
			else
				rra(stack, 1);
		}
		else if(a_or_b == 'b')
		{
			if(cheapest->above_medium)
				rb(stack, 1);
			else
				rrb(stack, 1);
		}
	}
}
void	push_nodes_back(t_list **stack_a, t_list **stack_b)
{
	t_list	*cheapest;
		
	cheapest = find_cheapest_node(*stack_b);
	if(cheapest->above_medium && cheapest->target->above_medium)
	{
		while(*stack_a != cheapest->target && *stack_b != cheapest)
			rr(stack_a, stack_b);
		present_location(*stack_a);
		present_location(*stack_b);
	}
	else if(cheapest->above_medium == false && cheapest->target->above_medium == false)
	{
		while(*stack_a != cheapest->target && *stack_b != cheapest)
			rrr(stack_a, stack_b);
		present_location(*stack_a);
		present_location(*stack_b);
	}
	stacks_rotation(stack_a, cheapest, 'b');
	stacks_rotation(stack_b, cheapest->target, 'a');
	pa(stack_a, stack_b);
}

void	push_swap(t_list **stack_a, t_list **stack_b)
{
	while ((*stack_a)->next->next->next != NULL)
		pa(stack_a, stack_b);
	sort_three(stack_a);
	while(stack_b)
	{
		initialize_nodes(*stack_a, *stack_b);
		push_nodes_back(stack_a, stack_b);
	}
}
