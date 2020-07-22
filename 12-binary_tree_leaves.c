#include "binary_trees.h"

/**
 * binary_tree_leaves - count the leaves of a binary tree
 * @tree: a pointer to the root node of the tree to count the leaves
 * Return: number of leaves or 0
 **/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t i = 0;

	if (!tree)
		return (0);
	if (!(tree->left) && !(tree->right))
		i++;
	else
		return (binary_tree_leaves(tree->left)
			 + binary_tree_leaves(tree->right));
	return (i);
}

