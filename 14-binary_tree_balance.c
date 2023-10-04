#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to check
 *
 * Return: If tree is NULL, return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_f;
	size_t height_m;

	if (!tree)
		return (0);

	height_f = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_m = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_f > height_m ? height_f : height_m);
}

/**
 * binary_tree_balance - Get balance factor of binary tree
 * @tree:  is a pointer to the root node of the tree 
 *
 * Return: If tree is NULL, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_f;
	int height_m;

	if (!tree)
		return (0);

	height_f = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_m = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_f - height_m);
}
