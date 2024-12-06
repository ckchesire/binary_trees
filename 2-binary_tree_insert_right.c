#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_right - function that inserts a node as the right-child
 * @parent: pointer to the node to insert right child
 * @value: value to store in the new node
 * Return: returns a pointer to the created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;
	binary_tree_t *currentRNode;

	/* On failure return NULL */
	if (parent == NULL)
		return (NULL);

	/* Create a new node */
	newNode = binary_tree_node(parent, value);

	if (newNode == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		currentRNode = parent->right;
		parent->right = newNode;
		newNode->right = currentRNode;
		currentRNode->parent = newNode;
	}
	else
		parent->right =  newNode;

	return (newNode);
}
