# push_swap

# Pseudo-code

```py
main(argc, argv):
	t_list stack_a
	t_list stack_b

	stack_a = parse_input(argc, argv)
	stack_b = NULL
	if (is_sorted(stack_a) == 1):
		return(0)
	if ft_lstsize(stack_a) == 2:
		custom_sort_2(stack_a, stack_b)
	else if ft_lstsize(stack_a) == 3:
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

# Pseudo-code: custom_sort_3

```py
max_i = index_of_max(stack)
if max_i = 0:
	rotate
else if max_i = 1:
	reverse_rotate

if value_0 > value_1
	swap
```

# Pseudo-code: custom_sort_4

```py
push_min(stack_a, stack_b)
custom_sort_3(stack_a, stack_b)
push_a()
```

# Pseudo-code: custom_sort_5

```py
push_min(stack_a, stack_b)
custom_sort_4(stack_a, stack_b)
push_a()
```
