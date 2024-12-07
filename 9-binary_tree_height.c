#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_height - function than measures  the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: returns the height of the tree, otherwise 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h = 0;
	size_t right_h = 0;

	if (tree == NULL)
		return (0);

	if (binary_tree_is_leaf(tree) == 1)
		return (0);

	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}
