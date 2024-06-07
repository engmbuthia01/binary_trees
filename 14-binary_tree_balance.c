#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
 * binary_tree_balance - function that measures the
 * balance factor of a binary tree
 * @tree: a pointer to the root node of the tree to measure
 * the balance factor
 *
 * Return: balanced factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0, total = 0;

	if (tree)
	{
		/*left and right height to balance.*/
		left = ((int)binary_tree_height(tree->left));
		right = ((int)binary_tree_height(tree->right));
		total = left - right;
	}
	return (total);
}
