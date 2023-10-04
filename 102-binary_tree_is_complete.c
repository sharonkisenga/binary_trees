#include "binary_trees.h"

/**
 * complete - binary tree complete check
 * @tree: is pointer to node of tree to check
 * @size: pointer to binary tree
 * @index: is an index
 *
 * Return: 1 
 */
int complete(const binary_tree_t *tree, int taille, int index)
{
	if (!tree)
		return (1);
	if (index >= taille)
		return (0);
	return (complete(tree->left, taille, 2 * index + 1) &&
			complete(tree->right, taille, 2 * index + 2));
}

/**
 * _binary_tree_size - the size of a binary tree
 * @tree: is a pointer to root node of tree 
 *
 * Return: 0 if tree is NULL
 */
int _binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (_binary_tree_size(tree->left) + _binary_tree_size(tree->right) + 1);
}

/**
 * binary_tree_is_complete - a function that checks if a binary tree is complete
 * @tree: is a pointer to the root node of the tree to check 
 *
 * Return: If tree is NULL, your function must return 0
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int taille;
	int call;

	if (tree)
	{
		taille = _binary_tree_size(tree);
		call = 0;

		return (complete(tree, taille, call));
	}
	return (0);
}
