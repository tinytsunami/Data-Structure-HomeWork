//===============================================
// Binary Search Treeじ穓碝攫
// By Yang-Yu 2017.3.27
//===============================================
#pragma once
#include "Stack.h"
#include "Queue.h"
#define NULL 0

//===============================================
// 攫竊翴
//===============================================
template <typename T>
struct BinaryTreeNode
{
	T data;
	BinaryTreeNode *left;
	BinaryTreeNode *right;
};

//===============================================
// ﹚竡攫摸
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
// 篶ㄧ计
//===============================================
template <typename T>
BinaryTree<T>::BinaryTree ()
{
	root = NULL;
}

//===============================================
// 承竊翴ㄧ计
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
// 患癹穓碝ㄧ计更
//===============================================
template <typename T>
BinaryTreeNode<T>* BinaryTree<T>::recursive_search (T data)
{
	return recursive_search (this->root, data);
}

//===============================================
// 患癹础ㄧ计更
//===============================================
template <typename T>
void BinaryTree<T>::recursive_insert (T data)
{
	this->root = recursive_insert (this->root, data);
}

//===============================================
// 患癹埃ㄧ计更
//===============================================
template <typename T>
void BinaryTree<T>::recursive_remove (T data)
{
	this->root = recursive_remove (this->root, data);
}

//===============================================
// 患癹穓碝ㄧ计
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
// 患癹础ㄧ计
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
// 患癹埃ㄧ计
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
// 患癹玡筂菌ㄧ计更
//===============================================
template <typename T>
void BinaryTree<T>::recursive_preorder (void (*callback)(BinaryTreeNode<T> *node))
{
	this->recursive_preorder (this->root, callback);
}

//===============================================
// 患癹い筂菌ㄧ计更
//===============================================
template <typename T>
void BinaryTree<T>::recursive_inorder (void (*callback)(BinaryTreeNode<T> *node))
{
	this->recursive_inorder (this->root, callback);
}

//===============================================
// 患癹筂菌ㄧ计更
//===============================================
template <typename T>
void BinaryTree<T>::recursive_postorder (void (*callback)(BinaryTreeNode<T> *node))
{
	this->recursive_postorder (this->root, callback);
}

//===============================================
// 患癹玡筂菌ㄧ计
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
// 患癹い筂菌ㄧ计
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
// 患癹筂菌ㄧ计
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
// 穓碝ㄧ计
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
// 础ㄧ计
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
// 埃ㄧ计
//===============================================
template <typename T>
void BinaryTree<T>::remove (T data)
{
	//...ゼ龟...//
}

//===============================================
// 玡筂菌ㄧ计
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
// い筂菌ㄧ计
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
// 筂菌ㄧ计
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
