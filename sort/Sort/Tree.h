#pragma once
class Node
{
public:
    Node(int data);
    int value;
    Node *left;
    Node *right;
};

Node::Node(int data)
{
    this->value = data;
    this->left = nullptr;
    this->right = nullptr;
}

class Tree
{
public:
    Tree(int* data);
    void push(int data);
    void inOrder();
    Node *root;
private:
    void push(Node *root, int data);
    void inOrder(Node *root);
    int *tmp;
    int index;
};

Tree::Tree(int *data)
{
    this->tmp = data;
    this->root = nullptr;
}
void Tree::push(int data)
{
    this->push(this->root, data);
}
void Tree::inOrder()
{
    this->index = 0;
    this->inOrder(this->root);
}
void Tree::push(Node *root, int data)
{
    if (this->root == nullptr)
        this->root = new Node(data);
    else if (root->value > data)
    {
        if (root->left == nullptr)
            root->left = new Node(data);
        else
            this->push(root->left, data);
    }
    else
    {
        if (root->right == nullptr)
            root->right = new Node(data);
        else
            this->push(root->right, data);
    }
}
void Tree::inOrder(Node *root)
{
	if (root != nullptr)
	{
		if (root->left != nullptr)
			inOrder (root->left);
		this->tmp[this->index++] = root->value;
		if (root->right != nullptr)
			inOrder (root->right);
	}
}