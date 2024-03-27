#include "binary_trees.h"
#include <stdlib.h>

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value) {
    // Allocate memory for the new node
    binary_tree_t *new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
    
    // Check if memory allocation was successful
    if (new_node == NULL) {
        return NULL; // Return NULL if malloc fails
    }
    
    // Initialize the node's attributes
    new_node->n = value;
    new_node->parent = parent;
    new_node->left = NULL;
    new_node->right = NULL;
    
    return new_node;
}
