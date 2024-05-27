/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 10:11:47 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/05/23 14:44:36 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list **stack)
{
	t_list *
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	t_list	*node;
	int		*number;
	size_t	i;

	stack_a = NULL;
	stack_b = NULL;
	i = 1;
	if (argc == 2)
		argv = ft_split(argv[1], ' ');
	while (argv[i])
	{
		number = malloc(sizeof(int));
		if (!number)
			return (EXIT_FAILURE);
		*number = ft_atoi(argv[i]);
		node = ft_lstnew(number);
		if (!node)
		{
			free(number);
			return(EXIT_FAILURE);
		}
		ft_lstadd_back(&stack_a, node);
		i++;
	}
	return (0);
}
