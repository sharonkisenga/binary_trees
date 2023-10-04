#include "binary_trees.h"

/**
 * belle_s - Checks if belle
 * @tree: Pointe to node 
 * @min: point to min
 * @max: point to max
 *
 * Return: 1 or 0
 */
int belle_s(const binary_tree_t *tree, int min, int max)
{
	if (!tree)
		return (1);
	if (tree->n < min || tree->n > max)
		return (0);
	return (belle_s(tree->left, min, tree->n - 1) &&
			belle_s(tree->right, tree->n + 1, max));
}

/**
 * belle - Checks if valid
 * @tree: is a pointer to node of tree
 *
 * Return: 1 or 0
 */
int belle(const binary_tree_t *tree)
{
	return (belle_s(tree, INT_MIN, INT_MAX));
}

/**
 * binary_tree_is_bst - Checks if a binary tree 
 * @tree: is a pointer to tree
 *
 * Return: 1 or NULL
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	return (tree ? belle(tree) : 0);
}
