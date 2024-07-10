/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaluszk <dpaluszk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 10:11:47 by dpaluszk          #+#    #+#             */
/*   Updated: 2024/07/10 17:49:25 by dpaluszk         ###   ########.fr       */
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
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return EXIT_FAILURE;
	else if (argc == 2)
	{
		arguments = ft_split(argv[1], ' ');
		initialize_stack(&stack_a, arguments);
	}
	else
		initialize_stack(&stack_a, arguments + 1);
	if (!stack_a)
		return (EXIT_FAILURE);
	if(!is_sorted(stack_a))
	{
		if (ft_lstsize(stack_a) == 2)
			sa(&stack_a, 1);
		else if (ft_lstsize(stack_a) == 3)
			sort_three(&stack_a);
		else
			push_swap(&stack_a, &stack_b);
	}
	t_list	*tmp;
	t_list	*tmp2;
	
	tmp = stack_a;
	tmp2 = stack_b;

	printf("stack_a:\n");
	while(tmp != NULL)
	{
		printf("%d\n", tmp->content);
		tmp = tmp->next;
	}
	printf("stack_b:\n");
	while(tmp2 != NULL)
	{
		printf("%d\n", tmp2->content);
		tmp2 = tmp2->next;
	}
	return (0);
}
