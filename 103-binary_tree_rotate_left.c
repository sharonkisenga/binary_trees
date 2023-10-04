#include "binary_trees.h"

/**
 * binary_tree_rotate_left - performs a left-rotation on a binary tree
 * @tree: is a pointer to the root node of the tree to rotate
 *
 * Return: a pointer to the new root node 
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *rice = NULL;

	if (tree && tree->right)
	{
		rice = tree->right->left;
		tree->right->left = tree;
		tree->right->parent = NULL;
		tree->parent = tree->right;
		tree->right = rice;
		if (rice)
			rice->parent = tree;
		tree = tree->parent;
	}
	return (tree);
}
