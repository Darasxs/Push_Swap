/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 17:55:09 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/06/06 19:19:01 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//create atol function here

t_list	*initialize_stack(char **argv)
{
	size_t	i;
	int		*number;
	t_list	*stack;
	t_list	*node;

	stack = NULL;
	i = 1;
	while (argv[i])
	{	
		number = malloc(sizeof(int));
		if (!number)
		{
			free_list(stack);
			return (NULL);
		}
		*number = ft_atoi(argv[i]);
		node = ft_lstnew(number);
		if (!node)
		{
			free(number);
			free_list(stack);
			return (NULL);
		}
		ft_lstadd_back(&stack, node);
		i++;
	}
	return (stack);
}