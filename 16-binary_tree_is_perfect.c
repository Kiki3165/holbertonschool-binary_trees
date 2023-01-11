#include "binary_trees.h"

/**
*binary_tree_is_perfect-binary_tree_is_perfect
*@tree:tree
*Return:0
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
if (binary_tree_balance(tree) == 0 &&
binary_tree_is_full(tree) == 1)
return (1);
return (0);
}
