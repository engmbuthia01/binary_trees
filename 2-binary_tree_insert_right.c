#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the left-child of another node
 * @parent: a pointer to the parent node of the node to create
 * @value: the value to put in the new node
 *
 * Return: a pointer to the new node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	binary_tree_t *old_child;

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
	/*if the parent initially had a right-child*/
	if (parent->right != NULL)
	{
		old_child = parent->right;
		/*point old_child->parent to new_node*/
		old_child->parent = new_node;
		/*point new_node right to old right child*/
		new_node->right = old_child;
	}
	/*now point it to the right of the parent*/
	parent->right = new_node;

	return (new_node);
}
