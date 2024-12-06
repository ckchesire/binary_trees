#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_left - function that inserts a node as the left-child
 * @parent: pointer to the node to insert left child
 * @value: value to store in the new node
 * Return: returns a pointer to the created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;
	binary_tree_t *currentLNode;

	/* On failure return NULL */
	if (parent == NULL)
		return (NULL);

	/* Create a new node */
	newNode = binary_tree_node(parent, value);

	if (newNode == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		currentLNode = parent->left;
		parent->left = newNode;
		newNode->left = currentLNode;
		currentLNode->parent = newNode;
	}
	else
		parent->left =  newNode;

	return (newNode);
}
