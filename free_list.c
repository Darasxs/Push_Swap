/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 17:54:29 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/06/06 18:34:09 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_list(t_list *stack)
{
	t_list	*tmp;

	while(stack)
	{
		tmp = stack;
		stack = stack->next;
		free(tmp->content);
		free(tmp);
	}
}