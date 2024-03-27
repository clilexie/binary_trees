#include "binary_trees.h"
/**
 * binary_tree_insert_left - add a node in the left of the parent
 * if it exists it move down one level and add the new node first
 * @parent: parent of the specified node
 * @value: value of the node
 * Return: NULL if it fails or the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value) {
    // Check if parent is NULL
    if (parent == NULL) {
        return NULL;
    }

    // Create a new node and check if allocation was successful
    binary_tree_t *new_node = binary_tree_node(parent, value);
    if (new_node == NULL) {
        return NULL;
    }

    // Check if parent already has a left child
    if (parent->left != NULL) {
        // Make the new node's left child point to the current left child of the parent
        new_node->left = parent->left;
        // Update the parent pointer of the current left child to point to the new node
        parent->left->parent = new_node;
    }

    // Update the left child pointer of the parent to point to the new node
    parent->left = new_node;

    return new_node;
}

