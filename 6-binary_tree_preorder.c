#include "binary_trees.h"
/**
 * binary_tree_preorder - function that goes through a binary tree
 * using pre-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node. The value in
 * the node must be passed as a parameter to this function.
 *
 * Return: nothing.
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Check if root and func is NULL*/
	if (!tree || !func)
	{
		return;
	}
	/*Runs the Function*/
	func(tree->n);

	/*Navigates to the left handside of the root first.*/
	binary_tree_preorder(tree->left, func);
	/*Navgates back to the Right.*/
	binary_tree_preorder(tree->right, func);
}
