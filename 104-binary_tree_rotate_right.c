#include "binary_trees.h"

/**
 * binary_tree_rotate_right - performs a right-rotation on a binary tree
 * @tree: is a pointer to the root node of the tree to rotate
 *
 * Return: return a pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *droit = NULL;

	if (tree && tree->left)
	{
		droit = tree->left->right;
		tree->left->right = tree;
		tree->left->parent = NULL;
		tree->parent = tree->left;
		tree->left = droit;
		if (droit)
			droit->parent = tree;
		tree = tree->parent;
	}
	return (tree);
}
