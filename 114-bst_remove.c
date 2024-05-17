#include "binary_trees.h"

/**
 * successor - Finds the minimum value node in the right subtree.
 * @node: Tree to check.
 * Return: The minimum value of this tree.
 */
int successor(bst_t *node)
{
    int left = 0;

    if (node == NULL)
    {
        return (0);
    }
    else
    {
        left = successor(node->left);
        if (left == 0)
        {
            return (node->n);
        }
        return (left);
    }
}
