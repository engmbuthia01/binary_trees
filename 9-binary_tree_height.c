#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height.
 *
 * Return: height.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	/*Check if null*/
	if (!tree)
	{
		return (0);
	}

	/*Gets the left side height*/
	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	/*Gets the right side height*/
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	/*Returns the longer side.*/
	return (height_l > height_r ? height_l : height_r);
}
