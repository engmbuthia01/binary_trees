#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if a node is a root
 * @node: the node to check
 * Return: 1 if the node is a root
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	/*if node is not null*/
	if (node)
	{
		/*if node has no parent*/
		if (!node->parent)
			return (1);
	}
	/*else return 0*/
	return (0);
}
