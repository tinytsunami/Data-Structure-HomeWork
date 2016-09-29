#pragma once

class Tree
{
public:
    class Node
    {
    public:
        int value;
        Node *left;
        Node *right;
    };
    Tree();
    void push(Node *root, int data);
    void preOrder();
    void inOrder();
    void postOrder();
private:
    Node *root;
};

Tree::Tree()
{
    this->root = new Node;
    this->root->left = nullptr;
    this->root->right = nullptr;
}

void Tree::push(Node *root, int data)
{
    if (root->value <= data)
        if (root->left == nullptr)
        {
            root->left = new Node;
            root->left->value = data;
            root->left->left = nullptr;
            root->left->right = nullptr;
            return;
        }
        else
        {
            this->push(root->left, data);
        }
    else
        if (root->right == nullptr)
        {
            root->right = new Node;
            root->right->value = data;
            root->right->left = nullptr;
            root->right->right = nullptr;
            return;
        }
        else
        {
            this->push(root->right, data);
        }
}