#include "binary_trees.h"
/**
 * bst_insert -  inserts a value in a Binary Search Tree
 * @tree: is a double pointer to the root node of the BST to insert
 * @value: is the value to store in the node to be inserted
 * Return:  NULL on failure
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *nouveau, *map;
	binary_tree_t *pieux;

	if (tree == NULL)
		return (NULL);

	if (*tree == NULL)
	{
		pieux = binary_tree_node((binary_tree_t *)(*tree), value);
		nouveau = (bst_t *)pieux;
		*tree = nouveau;
	}
	else
	{
		map = *tree;
		if (value < map->n)
		{
			if (map->left)
				nouveau = bst_insert(&map->left, value);
			else
			{
				pieux = binary_tree_node((binary_tree_t *)map, value);
				nouveau = map->left = (bst_t *)pieux;
			}
		}
		else if (value > map->n)
		{
			if (map->right)
				nouveau = bst_insert(&map->right, value);
			else
			{
				pieux = binary_tree_node((binary_tree_t *)map, value);
				nouveau = map->right = pieux;
			}
		}
		else
			return (NULL);
	}
	return (nouveau);
}
