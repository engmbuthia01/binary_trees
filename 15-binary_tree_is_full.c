#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full.
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 1 tree full or 0 tree not full
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
	{
		return (0);
	}
	if (!tree->left && !tree->right)
	{
		return (1);
	}
	if (tree->left && tree->left)
	{
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	}

	return (0);
}
