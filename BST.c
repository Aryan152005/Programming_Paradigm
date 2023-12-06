#include <stdio.h>
#include <stdlib.h>

// Node structure for a binary search tree
struct Node
{
    int key;
    struct Node *left;
    struct Node *right;
};

// Function to create a new node
struct Node *createNode(int key)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        printf("Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    newNode->key = key;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to insert a key into the BST
struct Node *insert(struct Node *root, int key)
{
    // If the tree is empty, create a new node
    if (root == NULL)
    {
        return createNode(key);
    }

    // Otherwise, recur down the tree
    if (key < root->key)
    {
        root->left = insert(root->left, key);
    }
    else if (key > root->key)
    {
        root->right = insert(root->right, key);
    }

    return root;
}

// Function to search for a key in the BST
struct Node *check(struct Node *root, int key)
{
    // Base Cases: root is null or key is present at the root
    if (root == NULL || root->key == key)
    {
        return root;
    }

    // Key is smaller than the root's key, search in the left subtree
    if (key < root->key)
    {
        return check(root->left, key);
    }

    // Key is larger than the root's key, search in the right subtree
    return check(root->right, key);
}

// Function to perform an in-order traversal of the BST
void I_O_Traversal(struct Node *root)
{
    if (root != NULL)
    {
        I_O_Traversal(root->left);
        printf("%d ", root->key);
        I_O_Traversal(root->right);
    }
}

// Function to free memory used by the BST
void freeBST(struct Node *root)
{
    if (root != NULL)
    {
        freeBST(root->left);
        freeBST(root->right);
        free(root);
    }
}

int main()
{
    struct Node *root = NULL;

    // Inserting elements into the BST
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    // Performing an in-order traversal to display the BST
    printf("In-order Traversal: ");
    I_O_Traversal(root);
    printf("\n");

    // Searching for an element in the BST
    int keyToSearch = 40;
    struct Node *result = check(root, keyToSearch);

    if (result != NULL)
    {
        printf("Element %d found in the BST.\n", keyToSearch);
    }
    else
    {
        printf("Element %d not found in the BST.\n", keyToSearch);
    }

    // Freeing memory used by the BST
    freeBST(root);

    return 0;
}
