#include "binary_trees.h"

/**
*binary_tree_is_leaf-binary_tree_is_leaf
*@node:node
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
        if (node->left == NULL && node->right == NULL) {
        return (0);
    }
    else {
        return (1);
    }
}