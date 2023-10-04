#include "binary_trees.h"

/**
 * binary_tree: inserts a node as the left-child of another node
 * @parent: parent inthe node
 * @value: value in the new node
 *
 * Return: node, NULL on failure 
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *nouveau;

	if (!parent)
		return (NULL);
	nouveau = binary_tree_node(parent, value);
	if (!nouveau)
		return (NULL);

	if (parent->left)
	{
		parent->left->parent = nouveau;
		nouveau->left = parent->left;
	}
	parent->left = nouveau;
	return (nouveau);
}
