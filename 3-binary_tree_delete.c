#include "binary_trees.h"
/**
 * binary_tree_delete - free an entire tree using recursion it free the node
 * when the node left and right are NULL
 * @tree: tree to free
 * Return: Nothing
 */
void binary_tree_delete(binary_tree_t *tree) {
    if (tree == NULL) {
        return; // Return if the tree is empty
    }
    
    // Recursively delete the left subtree
    if (tree->left != NULL) {
        binary_tree_delete(tree->left);
    }

    // Recursively delete the right subtree
    if (tree->right != NULL) {
        binary_tree_delete(tree->right);
    }
    
    // Free memory allocated for the current node
    free(tree);
}
