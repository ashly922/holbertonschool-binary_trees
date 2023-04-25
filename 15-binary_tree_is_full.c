#include "binary_trees.h"
/**
* binary_tree_is_full - checks if the tree is full
* @tree: pointer to the root node of binary tree
*
* Return: 0 if NULL
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* If leaf node, return true */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* If both left and right are not NULL, and left and right are full */
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));

	/* We reach here when none of the above if conditions are true */
	return (0);
}
