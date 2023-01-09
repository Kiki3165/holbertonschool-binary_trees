#include "binary_trees.h"

/*
*binary_tree_insert_left-binary_tree_insert_left
*@parent:parent
*@value:value
*Return:0
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value) {
  if (parent == NULL) {
    return NULL;
  }

  binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
  if (new_node == NULL) {
    return NULL;
  }

  new_node->parent = parent;
  new_node->value = value;
  new_node->left = parent->left;
  new_node->right = NULL;

  if (parent->left != NULL) {
    parent->left->parent = new_node;
  }

  parent->left = new_node;

  return new_node;
}