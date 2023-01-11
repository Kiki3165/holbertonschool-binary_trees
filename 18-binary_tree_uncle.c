#include "binary_trees.h"

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node && !node->parent)
		return (NULL);

	if (node == node->parent->right)
		return (node->parent->parent->right);

	if (!node->parent->parent)
		return (NULL);

	else
		return (node->parent->parent->left);
}
