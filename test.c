//t_list *process_arg(char *arg, t_list **stack) {
//    long *number = malloc(sizeof(long));
//    if (!number || string_error(arg) == false) {
//        free(number); // Ensure number is freed if string_error is false
//        return NULL;
//    }
//    *number = ft_atol(arg);
//    if (*number > INT_MAX || *number < INT_MIN || check_duplicate(*stack, *number)) {
//        free(number);
//        return NULL;
//    }
//    t_list *node = ft_lstnew(number);
//    if (!node) {
//        free(number);
//        return NULL;
//    }
//    return node;
//}

//t_list *initialize_stack(char **argv) {
//    size_t i = 0;
//    t_list *stack = NULL;

//    while (argv[i]) {
//        t_list *node = process_arg(argv[i], &stack);
//        if (!node) {
//            return_error(&stack);
//            break;
//        }
//        ft_lstadd_back(&stack, node);
//        i++;
//    }
//    return st
//}