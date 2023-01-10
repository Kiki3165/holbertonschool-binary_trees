#include "binary_trees.h"
#include <stddef.h>

/**
*binary_tree_height-binary_tree_height
*@tree:tree
*Return:0
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left_height = binary_tree_height(tree->left);
    size_t right_height = binary_tree_height(tree->right);
    if (tree == NULL)
    {
        return (0);
        free(tree);
    }
    return ((left_height > right_height ? left_height : right_height) + 1);
}
