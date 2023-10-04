#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right_child of another node
 * @parent: Parent in  the node 
 * @value: value in the new node
 *
 * Return: node, NULL on failure 
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nouveau;

	if (!parent)
		return (NULL);
	nouveau = binary_tree_node(parent, value);
	if (!nouveau)
		return (NULL);

	if (parent->right)
	{
		parent->right->parent = nouveau;
		nouveau->right = parent->right;
	}
	parent->right = nouveau;
	return (nouveau);
}
