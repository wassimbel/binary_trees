#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 * Return: height of a tree or 0
 **/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t i = 0, j = 0;

	if (!tree || (!(tree->left) && !(tree->right)))
		return (0);
	i = binary_tree_height(tree->left) + 1;
	j = binary_tree_height(tree->right) + 1;

	if (i > j)
		return (i);
	else
		return (j);
}
