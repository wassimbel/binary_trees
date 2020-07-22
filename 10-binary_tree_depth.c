#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a binary tree
 * @tree: a pointer to the root node of the tree to measure the depth
 * @Return: depth of a tree or 0
 **/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree || !(tree->parent))
		return (0);
	size_t i = binary_tree_depth(tree->parent) + 1;
		return (i);
}




