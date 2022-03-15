# push_swap

# Pseudo-code

```py
main(argc, argv):
	t_list stack_a
	t_list stack_b

	stack_a = check_and_parse_input(argc, argv)
	stack_b = NULL
	if (is_sorted(stack_a) == !):
		return(0)
	if ft_lstsize(stack_a) == 3:
		custom_sort_3(stack_a, stack_b)
	else if ft_lstsize(stack_a) == 4:
		custom_sort_4(stack_a, stack_b)
	else if ft_lstsize(stack_a) == 5:
		custom_sort_5(stack_a, stack_b)
	else
		radix_sort(stack_a, stack_b)
```


```py
check_and_parse_input(argc, argv):
	t_list stack_a

	stack_a = NULL
	if not good_number_of_args:
		exit()
	while arg:
		if (is_unique(arg, stack_a) == 0):
			free_error_exit()
		if (is_integer(arg) == 0):
			free_error_exit()
		ft_lstadd_back(stack_a, ft_lstnew(arg))
	return (stack_a)
```
