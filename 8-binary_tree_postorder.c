#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through binary tree
 * @tree: is a pointer to the root node of tree to traverse
 * @func: is pointer to function to call for each node
 *
 * 
 * If tree or func is NULL, do nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
