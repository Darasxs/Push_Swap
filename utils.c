/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 12:59:04 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/07/08 11:32:00 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	present_location(t_list *stack)
{
	int	i;
	int	medium;
	int	length;

	i = 0;
	if(!stack)
		return;
	length = ft_lstize(stack);
	medium = length / 2;
	while(stack)
	{
		stack->location = i;
		if(i <= medium)
			stack->above_medium = true;
		else
			stack->above_medium = false;
		stack = stack->next;
		i++;
	}
}

t_list	*find_smallest_number(t_list *stack)
{
	t_list	*tmp;
	t_list	*smallest;

	if (stack == NULL)
		return (NULL);

	tmp = stack;
	smallest = stack;

	while (tmp)
	{
		if (tmp->content < smallest->content)
			smallest = tmp;
		tmp = tmp->next;
	}
	return (smallest);
}
void	determine_price(t_list *stack_a, t_list *stack_b)
{
	size_t	len_a;
	size_t	len_b;

	len_a = ft_lstsize(stack_a);
	len_b = ft_lstsize(stack_b);

	while(stack_b)
	{
		if(stack_b->above_medium == true)
			stack_b->price = stack_b->location;
		if(stack_b->above_medium == false)
			// calculate the price
		if(stack_b->target->above_medium == true)
			// calculate the price;
		else if(stack_b->target->above_medium == false)
			// calculate the price;
		stack_b = stack_b->next;
	}
		
}