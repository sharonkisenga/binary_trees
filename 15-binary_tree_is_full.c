#include "binary_trees.h"

/**
 * binary_tree_is_full - Check if binary tree is full
 * @tree:  is a pointer to the root node of the tree to check
 *
 * Return: If tree is NULL, your function must return 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int height_f;
	int height_m;

	if (!tree)
		return (0);

	height_f = tree->left ? 1 + binary_tree_is_full(tree->left) : 0;
	height_m = tree->right ? 1 + binary_tree_is_full(tree->right) : 0;
	return (height_f == height_m);
}
