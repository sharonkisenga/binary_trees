#include "binary_trees.h"

/**
 * binary_tree_height - the height of a binary tree
 * @tree: is a pointer to the root node 
 *
 * Return: 0 if NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_m;
	size_t size_s;

	if (!tree)
		return (0);

	size_m = tree->left ? 1 + binary_tree_size(tree->left) : 0;
	size_s = tree->right ? 1 + binary_tree_size(tree->right) : 0;
	return (size_m > size_s ? size_m : size_s);
}

/**
 * visit_level - visit leveel all nodes
 * @tree: is a pointer to tree
 * @level: is a pointer to level
 * @func: is a pointer to function
 *
 * Return: do nothing
 */
void enter_level(const binary_tree_t *tree, int level, void (*func)(int))
{
	if (!tree)
		return;
	if (level == 1)
		func(tree->n);
	else
	{
		enter_level(tree->left, level - 1, func);
		enter_level(tree->right, level - 1, func);
	}
}

/**
 * binary_tree_levelorder - goes through a binary tree using level-order traversal
 * @tree: is a pointer to the root node of the tree to traverse
 * @func: is a pointer to a function to call for each node.
 *
 * Return: If tree or func is NULL, do nothing
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int size;
	int f;

	if (tree && func)
	{
		size = binary_tree_size(tree) + 2;

		for (f = 0; f < size; f++)
		{
			enter_level(tree, f, func);
		}
	}
}
