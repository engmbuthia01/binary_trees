#include "binary_trees.h"
/**
 * binary_tree_delete - delete a binary tree
 * @tree: pointer to the binary tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		/*recursively delete all left nodes*/
		binary_tree_delete(tree->left);
		/*recursively delete all right nodes*/
		binary_tree_delete(tree->right);
		/*free allocated memory*/
		free(tree);
	}
}
