#include "binary_trees.h"
/**
* binary_tree_node- creates new node for binary tree
* @parent: pointer to parent node
* @value: integer value to be stored in binary tree node being created
*
* Return: pointer to new binary tree node
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
	{
		return (NULL);
	}
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	return (node);
}
