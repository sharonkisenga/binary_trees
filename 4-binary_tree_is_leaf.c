#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Write a function that check
 * @node: Where node is a pointer to the node to check
 *
 * Return: If node is NULL, return 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return (node && !node->left && !node->right ? 1 : 0);
}
