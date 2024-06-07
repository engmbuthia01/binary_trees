#include "binary_trees.h"
/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: a pointer to the parent node of the node to create
 * @value: the value to put in the new node
 *
 * Return: a pointer to the new node or NULL
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/*create pointer and allocate memory for the new node*/
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (!new_node) /*check if mem alloc fails*/
	{
		return (NULL);
	}

	/*point new_node->parent to the given parents*/
	new_node->parent = parent;
	/*point new_node->value to the given value*/
	new_node->n = value;
	/*other attribs are NULL*/
	new_node->right = NULL;
	new_node->left = NULL;

	return (new_node);
}
