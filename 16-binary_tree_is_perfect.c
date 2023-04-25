#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = 0, nodes = 0;

	if (!tree)
		return (0);

	height = binary_tree_height(tree);
	nodes = binary_tree_size(tree);

	/* Check if tree is full and all levels have maximum nodes */
	return (nodes == ((1 << height) - 1));
}
