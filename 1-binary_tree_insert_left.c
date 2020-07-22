#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: thee value to store in the new node
 * Return: a pointer to the created node, NULL on failure
 * or if parent is NULL
 **/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *bt;

	if (!parent)
		return (NULL);
	bt = binary_tree_node(parent, value);
	if (!bt)
		return (NULL);

	if (parent->left)
		parent->left->parent = bt;
	bt->left = parent->left;
	parent->left = bt;
	return (bt);
}
