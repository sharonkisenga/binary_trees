#include "binary_trees.h"

/**
 * _pow_recursion - give s raised to the power of k
 * @s: is ponter to s
 * @k: is poiter to k
 *
 * Return s or k
 */

int _pow_recursion(int s, int k)
{
	if (k < 0)
		return (-1);
	if (k == 0)
		return (1);
	return (s * _pow_recursion(s, k - 1));
}

/**
 * binary_tree_heigh - give the height of a binary tree
 * @tree: is a pointer to the root node
 *
 * Return: Height of tree, 0 if NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_f;
	size_t height_m;

	if (!tree)
		return (0);

	height_f = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_m = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_f > height_m ? height_f : height_m);
}

/**
 * binary_tree_size - give the size of a binary tree
 * @tree: is pointer to root node of tree
 *
 * Return: Size of binary tree, 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree:  is a pointer to the root node of the tree to check
 *
 * Return: If tree is NULL, your function must return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int nodes, target, height;

	height = binary_tree_height(tree) + 1;
	nodes = binary_tree_size(tree);
	target = _pow_recursion(2, height);
	return (target - 1 == nodes);
}
