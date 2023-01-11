# holbertonschool-binary_trees

***
![image](https://en.wikipedia.org/wiki/Binary_tree#/media/File:Binary_tree_v2.svg)
***

A binary tree is a tree data structure in which each node has at most two children, which are referred to as the left child and the right child. A recursive definition using just set theory notions is that a (non-empty) binary tree is a tuple (L, S, R), where L and R are binary trees or the empty set and S is a singleton set containing the root.


## Functions and Files:

| **Files**  | **Description** |
| ------------- |:-------------:|
| [0-binary_tree_node.c](https://github.com/Kiki3165/holbertonschool-binary_trees/blob/main/0-binary_tree_node.c) | function that creates a binary tree node |
| [1-binary_tree_insert_left.c](https://github.com/Kiki3165/holbertonschool-binary_trees/blob/main/1-binary_tree_insert_left.c)| function that inserts a node as the left-child of another node |
| [2-binary_tree_insert_right.c](https://github.com/Kiki3165/holbertonschool-binary_trees/blob/main/2-binary_tree_insert_right.c) | function that inserts a node as the right-child of another node |
| [3-binary_tree_delete.c](https://github.com/Kiki3165/holbertonschool-binary_trees/blob/main/3-binary_tree_delete.c) | function that deletes an entire binary tree |
| [4-binary_tree_is_leaf.c](https://github.com/Kiki3165/holbertonschool-binary_trees/blob/main/4-binary_tree_is_leaf.c) | function that checks if a node is a leaf |
| [5-binary_tree_is_root.c](https://github.com/Kiki3165/holbertonschool-binary_trees/blob/main/5-binary_tree_is_root.c) | function that checks if a given node is a root |
| [6-binary_tree_preorder.c](https://github.com/Kiki3165/holbertonschool-binary_trees/blob/main/6-binary_tree_preorder.c) | function that goes through a binary tree using pre-order traversal |
| [7-binary_tree_inorder.c](https://github.com/Kiki3165/holbertonschool-binary_trees/blob/main/7-binary_tree_inorder.c) | function that goes through a binary tree using in-order traversal |
| [8-binary_tree_postorder.c](https://github.com/Kiki3165/holbertonschool-binary_trees/blob/main/8-binary_tree_postorder.c) | function that goes through a binary tree using post-order traversal |
| [9-binary_tree_height.c](https://github.com/Kiki3165/holbertonschool-binary_trees/blob/main/9-binary_tree_height.c) | function that measures the height of a binary tree |
| [10-binary_tree_depth.c](https://github.com/Kiki3165/holbertonschool-binary_trees/blob/main/10-binary_tree_depth.c) | function that measures the depth of a node in a binary tree |
| [11-binary_tree_size.c](https://github.com/Kiki3165/holbertonschool-binary_trees/blob/main/11-binary_tree_size.c) | function that measures the size of a binary tree |
| [12-binary_tree_leaves.c](https://github.com/Kiki3165/holbertonschool-binary_trees/blob/main/12-binary_tree_leaves.c) | function that counts the leaves in a binary tree |
| [13-binary_tree_nodes.c](https://github.com/Kiki3165/holbertonschool-binary_trees/blob/main/13-binary_tree_nodes.c) | function that counts the nodes with at least 1 child in a binary tree |
| [14-binary_tree_balance.c](https://github.com/Kiki3165/holbertonschool-binary_trees/blob/main/14-binary_tree_balance.c) | function that measures the balance factor of a binary tree |
| [15-binary_tree_is_full.c](https://github.com/Kiki3165/holbertonschool-binary_trees/blob/main/15-binary_tree_is_full.c) | function that checks if a binary tree is full |
| [16-binary_tree_is_perfect.c](https://github.com/Kiki3165/holbertonschool-binary_trees/blob/main/16-binary_tree_is_perfect.c) | function that checks if a binary tree is perfect |
| [17-binary_tree_sibling.c](https://github.com/Kiki3165/holbertonschool-binary_trees/blob/main/17-binary_tree_sibling.c) | function that finds the sibling of a node |
| [18-binary_tree_uncle.c](https://github.com/Kiki3165/holbertonschool-binary_trees/blob/main/18-binary_tree_uncle.c) | function that finds the uncle of a node |
| [binary_tree_print.c](https://github.com/Kiki3165/holbertonschool-binary_trees/blob/main/binary_tree_print.c) | print fuction |
| [binary_trees.h](https://github.com/Kiki3165/holbertonschool-binary_trees/blob/main/binary_trees.h) | header file that includes the libraries and prototypes |

***

## Learning Objectives
***
### General

* What is a binary tree
* What is the difference between a binary tree and a Binary Search Tree
* What is the possible gain in terms of time complexity compared to linked lists
* What are the depth, the height, the size of a binary tree
* What are the different traversal methods to go through a binary tree
* What is a complete, a full, a perfect, a balanced binary tree

### Requirements

* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* A README.md file, at the root of the folder of the project, is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* You are allowed to use the standard library
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
* The prototypes of all your functions should be included in your header file called binary_trees.h
* Don’t forget to push your header file
* All your header files should be include guarded
***

## More Info
***
## Data structures

Please use the following data structures and types for binary trees. Don’t forget to include them in your header file.

### Basic Binary Tree

```
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```
### Binary Search Tree
```
typedef struct binary_tree_s bst_t;
```
### AVL Tree
```
typedef struct binary_tree_s avl_t;
```
### Max Binary Heap
```
typedef struct binary_tree_s heap_t;
```
***

## HOW TO COMPILE

    gcc -Wall -Werror -Wextra -pedantic <files> -o <output_executable_name>

## HOW TO USE

    ./<output_executable_name>

## Authors
***

[Kyllian Terrasson](https://github.com/Kiki3165)

[Pauline ](https://github.com/paulinepar)

[Asia Groupierre](https://github.com/AsiaGrpr)

***