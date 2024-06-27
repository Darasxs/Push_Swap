/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 10:11:47 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/06/27 12:57:10 by dpaluszk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	char	**arguments;

	arguments = argv;
	stack_a = NULL;
	stack_b = NULL;
	if (argc == 1 || (argc == 2 && argv[1][0] == 0))
		return EXIT_FAILURE;
	else if (argc == 2)
	{
		arguments = ft_split(argv[1], ' ');
		stack_a = initialize_stack(arguments);
	}
	else
		stack_a = initialize_stack(arguments + 1);
	if (!stack_a)
		return (EXIT_FAILURE);
	if(!is_sorted(stack_a))
	{
		if (ft_lstsize(stack_a) == 2)
			sa(&stack_a, 1);
		else if (ft_lstsize(stack_a) == 3)
			sort_three(&stack_a);
	}
	//	else
	//		push_swap(&stack_a, &stack_b);
	//}
	// free(&stack_a); - uncomment this at the end
	t_list	*tmp;
	tmp = stack_a;
	while(tmp != NULL)
	{
		printf("%ld ", tmp->content);
		tmp = tmp->next;
	}
	return (0);
}
