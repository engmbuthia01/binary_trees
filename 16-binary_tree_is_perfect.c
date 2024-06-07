#include "binary_trees.h"
/**
 * is_perfect - checks if the tree is perfect.
 * @tree: pointer to root node
 * @d: depth of tree
 * @level: level of tree.
 *
 * Return: 1 if perfect or 0 if not perfect
*/
int is_perfect(const binary_tree_t *tree, size_t d, size_t level)
{
	if (tree == NULL)
	{
		return (1);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		if (d != level + 1)
		{
			return (0);
		}
		else
			return (1);
	}
	if (tree->left == NULL || tree->right == NULL)
	{
		return (0);
	}

	return (is_perfect(tree->left, d, level + 1) &&
	 is_perfect(tree->right, d, level + 1));
}

/**
 * calc_depth - Calculate the depth
 * @tree: root node pointer
 *
 * Return: depth
*/
size_t calc_depth(const binary_tree_t *tree)
{
	size_t d = 0;

	while (tree != NULL)
	{
		d++;
		tree = tree->left;
	}
	return (d);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 1 if perfect, 0 if not perfect
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t d;

	d = calc_depth(tree);
	return (is_perfect(tree, d, 0));
}
