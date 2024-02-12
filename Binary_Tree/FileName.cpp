#include <iostream>

using namespace std;

// Define a structure for a binary tree node
struct Node {
    int data;       // Data stored in the node
    Node* left;     // Pointer to the left child node
    Node* right;    // Pointer to the right child node
};

// Function to create a new node with the given data
Node* createNode(int data) {
    // Allocate memory for a new node
    Node* newNode = new Node();
    // Set the data of the new node
    newNode->data = data;
    // Initialize left and right pointers to nullptr
    newNode->left = newNode->right = nullptr;
    // Return the newly created node
    return newNode;
}

// Function to print the nodes of the tree in preorder traversal
void printPreorder(Node* root) {
    // Base case: if the current node is nullptr, return
    if (root == nullptr)
        return;
    // Print the data of the current node
    cout << root->data << " ";
    // Recursively print the left subtree
    printPreorder(root->left);
    // Recursively print the right subtree
    printPreorder(root->right);
}

// Main function
int main() {
    // Create the root node with data 1
    Node* root = createNode(1);
    // Create left child of root with data 2
    root->left = createNode(2);
    // Create right child of root with data 10
    root->right = createNode(10);
    // Create left child of root's left child with data 7
    root->left->left = createNode(7);

    // Print the preorder traversal of the tree
    cout << "Preorder traversal of the tree: ";
    printPreorder(root);
    cout << endl;

    // Deallocate memory for the nodes (free the memory)
    delete root->left->left;
    delete root->left;
    delete root->right;
    delete root;

    // Return 0 to indicate successful completion of the program
    return 0;
}
