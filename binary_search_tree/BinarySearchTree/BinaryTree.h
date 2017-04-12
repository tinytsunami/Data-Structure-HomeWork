//===============================================
// Binary Search Tree�]�G���j�M��^
// By Yang-Yu 2017.3.27
//===============================================
#pragma once
#include "Stack.h"
#include "Queue.h"
#define NULL 0

//===============================================
// �𪺸`�I
//===============================================
template <typename T>
struct BinaryTreeNode
{
	T data;
	BinaryTreeNode *left;
	BinaryTreeNode *right;
};

//===============================================
// �w�q�����O
//===============================================
template <typename T>
class BinaryTree
{
public:
	BinaryTree ();
	BinaryTreeNode<T>* search (T data);
	void insert (T data);
	void remove (T data);
	void inorder (void (*callback)(BinaryTreeNode<T> *node));
	void postorder (void (*callback)(BinaryTreeNode<T> *node));
	void preorder (void (*callback)(BinaryTreeNode<T> *node));
	BinaryTreeNode<T>* recursive_search (T data);
	void recursive_insert (T data);
	void recursive_remove (T data);
	void recursive_inorder (void (*callback)(BinaryTreeNode<T> *node));
	void recursive_postorder (void (*callback)(BinaryTreeNode<T> *node));
	void recursive_preorder (void (*callback)(BinaryTreeNode<T> *node));
private:
	Stack<BinaryTreeNode<T>*> stack;
	Queue<BinaryTreeNode<T>*> queue;
	BinaryTreeNode<T>* root;
	BinaryTreeNode<T>* create (T data);
	BinaryTreeNode<T>* recursive_search (BinaryTreeNode<T> *root, T data);
	BinaryTreeNode<T>* recursive_insert (BinaryTreeNode<T> *root, T data);
	BinaryTreeNode<T>* recursive_remove (BinaryTreeNode<T> *root, T data);
	void recursive_inorder (BinaryTreeNode<T> *root, void (*callback)(BinaryTreeNode<T> *node));
	void recursive_postorder (BinaryTreeNode<T> *root, void (*callback)(BinaryTreeNode<T> *node));
	void recursive_preorder (BinaryTreeNode<T> *root, void (*callback)(BinaryTreeNode<T> *node));
};

//===============================================
// �غc���
//===============================================
template <typename T>
BinaryTree<T>::BinaryTree ()
{
	root = NULL;
}

//===============================================
// �Ыظ`�I���
//===============================================
template <typename T>
BinaryTreeNode<T>* BinaryTree<T>::create (T data)
{
	BinaryTreeNode<T> * node = new BinaryTreeNode<T>;
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	return node;
}

//===============================================
// ���j�j�M��ơ]�����^
//===============================================
template <typename T>
BinaryTreeNode<T>* BinaryTree<T>::recursive_search (T data)
{
	return recursive_search (this->root, data);
}

//===============================================
// ���j���J��ơ]�����^
//===============================================
template <typename T>
void BinaryTree<T>::recursive_insert (T data)
{
	this->root = recursive_insert (this->root, data);
}

//===============================================
// ���j�R����ơ]�����^
//===============================================
template <typename T>
void BinaryTree<T>::recursive_remove (T data)
{
	this->root = recursive_remove (this->root, data);
}

//===============================================
// ���j�j�M���
//===============================================
template <typename T>
BinaryTreeNode<T>* BinaryTree<T>::recursive_search (BinaryTreeNode<T> *root, T data)
{
	if (root == NULL)
		return NULL;
	if (root->data == data)
		return root;
	else if (root->data > data)
		return recursive_search(root->left, data);
	else
		return recursive_search (root->right, data);
}

//===============================================
// ���j���J���
//===============================================
template <typename T>
BinaryTreeNode<T>* BinaryTree<T>::recursive_insert (BinaryTreeNode<T> *root, T data)
{
	if (root == NULL)
		return create(data);
	if (root->data == data)
		return root;
	else if (root->data > data)
		root->left = recursive_insert (root->left, data);
	else
		root->right = recursive_insert (root->right, data);
	return root;
}

//===============================================
// ���j�R�����
//===============================================
template <typename T>
BinaryTreeNode<T>* BinaryTree<T>::recursive_remove (BinaryTreeNode<T> *root, T data)
{
	if (root == NULL)
		return NULL;
	else if (root->data > data)
		root->left = recursive_remove (root->left, data);
	else if (root->data < data)
		root->right = recursive_remove (root->right, data);
	else
	{
		if (root->left == NULL || root->right == NULL)
		{
			BinaryTreeNode<T>* child = root->left == NULL ? root->right : root->left;
			if (child == NULL)
			{
				child = root;
				root = NULL;
			}
			else
				*root = *child;
			delete child;
		}
		else
		{ 
			BinaryTreeNode<T> *inherit = root->right;
			while (inherit->left != NULL)
				inherit = inherit->left;
			root->data = inherit->data;
			root->right = recursive_remove (root->right, root->data);
		}
	}
	return root;
}

//===============================================
// ���j�e�ǹM����ơ]�����^
//===============================================
template <typename T>
void BinaryTree<T>::recursive_preorder (void (*callback)(BinaryTreeNode<T> *node))
{
	this->recursive_preorder (this->root, callback);
}

//===============================================
// ���j���ǹM����ơ]�����^
//===============================================
template <typename T>
void BinaryTree<T>::recursive_inorder (void (*callback)(BinaryTreeNode<T> *node))
{
	this->recursive_inorder (this->root, callback);
}

//===============================================
// ���j��ǹM����ơ]�����^
//===============================================
template <typename T>
void BinaryTree<T>::recursive_postorder (void (*callback)(BinaryTreeNode<T> *node))
{
	this->recursive_postorder (this->root, callback);
}

//===============================================
// ���j�e�ǹM�����
//===============================================
template <typename T>
void BinaryTree<T>::recursive_preorder (BinaryTreeNode<T> *root, void (*callback)(BinaryTreeNode<T> *node))
{
	if (root == NULL) return;
	callback (root);
	this->recursive_preorder (root->left, callback);
	this->recursive_preorder (root->right, callback);
}

//===============================================
// ���j���ǹM�����
//===============================================
template <typename T>
void BinaryTree<T>::recursive_inorder (BinaryTreeNode<T> *root, void (*callback)(BinaryTreeNode<T> *node))
{
	if (root == NULL) return;
	this->recursive_inorder (root->left, callback);
	callback (root);
	this->recursive_inorder (root->right, callback);
}

//===============================================
// ���j��ǹM�����
//===============================================
template <typename T>
void BinaryTree<T>::recursive_postorder (BinaryTreeNode<T> *root, void (*callback)(BinaryTreeNode<T> *node))
{
	if (root == NULL) return;
	this->recursive_postorder (root->left, callback);
	this->recursive_postorder (root->right, callback);
	callback (root);
}

//===============================================
// �j�M���
//===============================================
template <typename T>
BinaryTreeNode<T>* BinaryTree<T>::search (T data)
{
	BinaryTreeNode<T> *parent = NULL;
	BinaryTreeNode<T> *now = this->root;
	while (now != NULL)
	{
		parent = now;
		if (now->data == data)
			return now;
		else if (now->data > data)
			now = now->left;
		else
			now = now->right;
	}
	return NULL;
}

//===============================================
// ���J���
//===============================================
template <typename T>
void BinaryTree<T>::insert (T data)
{
	BinaryTreeNode<T> *parent = NULL;
	BinaryTreeNode<T> *now = this->root;
	while (now != NULL)
	{
		parent = now;
		if (now->data == data)
			return;
		else if (now->data > data)
			now = now->left;
		else
			now = now->right;
	}
	if (this->root == NULL)
		this->root = create (data);
	else if (parent->data > data)
		parent->left = create (data);
	else
		parent->right = create (data);
}

//===============================================
// �R�����
//===============================================
template <typename T>
void BinaryTree<T>::remove (T data)
{
	//...����@...//
}

//===============================================
// �e�ǹM�����
//===============================================
template <typename T>
void BinaryTree<T>::preorder (void (*callback)(BinaryTreeNode<T> *node))
{
	stack.clear ();
	BinaryTreeNode<T>* now = this->root;
	do
	{
		while (now != NULL)
		{
			callback (now);
			stack.push (now);
			now = now->left;
		}
		now = stack.pop ();
		now = now->right;
	} while (!stack.empty () || now != NULL);
}

//===============================================
// ���ǹM�����
//===============================================
template <typename T>
void BinaryTree<T>::inorder (void (*callback)(BinaryTreeNode<T> *node))
{
	stack.clear ();
	BinaryTreeNode<T>* now = this->root;
	do
	{
		while (now != NULL)
		{
			stack.push (now);
			now = now->left;
		}
		now = stack.pop ();
		callback (now);
		now = now->right;
	} while (!stack.empty () || now != NULL);
}

//===============================================
// ��ǹM�����
//===============================================
template <typename T>
void BinaryTree<T>::postorder (void (*callback)(BinaryTreeNode<T> *node))
{
	queue.clear ();
	stack.clear ();
	BinaryTreeNode<T>* now = this->root;
	do
	{
		while (now != NULL)
		{
			queue.push (now);
			stack.push (now);
			now = now->right;
		}
		now = stack.pop ();
		now = now->left;
	} while (!stack.empty () || now != NULL);
	// reverse
	stack.clear ();
	while (!queue.empty ())
		stack.push (queue.pop ());
	while (!stack.empty ())
		callback (stack.pop());
}
