#include "binary_trees.h"


/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: thee value to store in the new node
 * Return: a pointer to the created node, NULL on failure
 * or if parent is NULL
 **/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

	binary_tree_t *bt;

	if (!parent)
		return (NULL);
	bt = binary_tree_node(parent, value);
	if (!bt)
		return (NULL);
	if (parent->right)
		parent->right->parent = bt;
	bt->right = parent->right;
	parent->right = bt;
	return (bt);
}
