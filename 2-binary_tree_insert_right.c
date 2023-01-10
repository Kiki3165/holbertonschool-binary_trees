#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_insert_right - create binary tree node
 * @parent : pointer
 * @value : value of node
 * Return: node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);

	node->parent = parent;
	node->n = value;
	node->left = NULL;

	if (parent->right != NULL)
	{
		node->right = parent->right;
		parent->right->parent = node;
	}
	else
	{
		node->right = NULL;
	}

	parent->right = node;
	return (node);
}
