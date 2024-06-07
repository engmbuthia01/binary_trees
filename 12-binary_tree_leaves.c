#include "binary_trees.h"
/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of leaves
 *
 * Return: no. of leaves
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves;

	if (!tree)
	{
		return (0);
	}

	if (!tree->left && !tree->right)
	{
		return (1);
	}

	/*Recursively sums leaves on both sides.*/
	leaves = binary_tree_leaves(tree->right) + binary_tree_leaves(tree->left);
	return (leaves);
}
