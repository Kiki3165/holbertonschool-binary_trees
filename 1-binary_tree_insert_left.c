#include "binary_trees.h"

/*
*binary_tree_insert_left-binary_tree_insert_left
*@parent:parent
*@value:value
*Return:0
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value) {
    // Return NULL if parent is NULL
    if (parent == NULL) {
        return NULL;
    }

    binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
    if (new_node == NULL) {
        return NULL;
    }

    new_node->value = value;

    new_node->left = NULL;
    new_node->right = NULL;

    new_node->parent = parent;

    binary_tree_t *old_left_child = parent->left;
    parent->left = new_node;

    if (old_left_child != NULL) {
        old_left_child->parent = new_node;
        new_node->left = old_left_child;
    }
    return new_node;
}
