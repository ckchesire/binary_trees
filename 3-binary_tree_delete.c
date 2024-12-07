#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_delete - function that deletes an entire binary tree
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *currentNode;

	/* We first access root */
	currentNode = tree;

	/* Our pointer is ponting at root */
	/* We move pointer to the left most node */
	while (currentNode->left != NULL)
	{
		currentNode = currentNode->left
	}
}
