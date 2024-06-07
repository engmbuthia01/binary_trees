#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if a node is a leaf-node
 * @node: node to be checked
 * Return: true if the node is a leaf
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	/*check if node given is NULL*/
	if (!node)
		return (0);
	/*check if both left and right node pointers are NULL*/
	if (!node->left && (!node->right))
		return (1);
	return (0);
}
