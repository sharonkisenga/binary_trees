#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a given node is a root
 * @node: Where node is a pointer to the node to check
 *
 * Return: If node is NULL, return 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	return (node && !node->parent ? 1 : 0);
}
