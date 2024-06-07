#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: a pointer to the parent node of the node to create
 * @value: the value to put in the new node
 *
 * Return: a pointer to the new node or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/*check if parent is NULL*/
	if (!parent)
		return (NULL);

	/*create pointer and allocate memory for the new node*/
	new_node = malloc(sizeof(binary_tree_t));

	/*check if mem alloc fails*/
	if (!new_node)
		return (NULL);

	/*point new_node->parent to the given parents*/
	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	/*if the parent initially had a left-child*/
	if (parent->left != NULL)
	{
		/*point left-child->parent to new_node*/
		(parent->left)->parent = new_node;
		/*point new_node left to old left child*/
		new_node->left = parent->left;
	}
	/*now point it to the left of the parent*/
	parent->left = new_node;

	return (new_node);
}
