/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 10:11:47 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/05/22 16:17:58 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	swap(t_list **stack)
{
	t_list *
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*node;
	int		*number;
	//t_list	*stack_b;
	size_t	i;

	i = 1;
	(void)argc;
	while(argv[i])
	{
		number = malloc(sizeof(int));
		*number = ft_atoi(argv[i]);
		node = ft_lstnew(number);
		ft_lstadd_back(&stack_a, node);
		i++;
	}
	while (stack_a)
	{
		printf("%d\n", *(int *)stack_a->content);
		stack_a = stack_a->next;
	}
	return (0);
}