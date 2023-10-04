#include "binary_trees.h"

/**
 * binary_tree - Creates a binary tree node
 * @value: value in the node
 * @parent: parent in the node
 *
 * Return: the new node, NULL on fail
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nouveau;

	nouveau = malloc(sizeof(binary_tree_t));
	if (!nouveau)
		return (NULL);
	nouveau->n = value;
	nouveau->parent = parent;
	nouveau->left = NULL;
	nouveau->right = NULL;
	return (nouveau);
}
