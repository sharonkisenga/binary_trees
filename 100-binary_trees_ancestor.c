#include "binary_trees.h"

/**
 * _binary_tree_depth - the depth of a node in a binary tree
 * @tree: is a pointer to node depth
 *
 * Return: Depth of binary tree, 0 if NULL
 */
int _binary_tree_depth(const binary_tree_t *tree)
{
	return (tree && tree->parent ? 1 + _binary_tree_depth(tree->parent) : 0);
}

/**
 * binary_trees_ancestor - lowest common ancestor of two nodes
 * @first: is a pointer to the first node
 * @second:  is a pointer to the second node
 *
 * Return: If no common ancestor was found, your function must return NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *nouveau_m, *nouveau_k;
	int diff;

	if (!first || !second)
		return (NULL);
	diff = _binary_tree_depth(first) - _binary_tree_depth(second);
	nouveau_m = (binary_tree_t *)first;
	nouveau_k = (binary_tree_t *)second;

	while (diff < 0)
	{
		nouveau_k = nouveau_k->parent;
		++diff;
	}
	while (diff)
	{
		nouveau_m = nouveau_m->parent;
		--diff;
	}
	while (nouveau_m && nouveau_m)
	{
		if (nouveau_m == nouveau_k)
			return (nouveau_m);
		nouveau_m = nouveau_m->parent;
		nouveau_k = nouveau_k->parent;
	}
	return (NULL);
}
