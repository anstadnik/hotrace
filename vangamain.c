int	main(void)
{
	t_tree	*tree;

	if (!(tree = fill_tree()))
	{
		ft_putendl_fd("Error", 2);
		return (0);
	}
	print_rezults(tree);
	clean_tree(tree);
	return (0);
}
