#pragma once
#include <string>

template <typename T>
struct singleNode
{
	T data;
	singleNode *next;
};

template <typename T>
class SingleLinkList
{
private:
	singleNode<T> *header;
	singleNode<T> *footer;
	singleNode<T>* createsingleNode (T);
	singleNode<T>* findBeforeTarget (T);
public:
	SingleLinkList ();
	bool empty ();
	void clear ();
	void inverse ();
	void insertFirst (T);
	void insertLast (T);
	singleNode<T>* findTarget (T);
	bool insertBeforeTarget (T, T);
	bool insertAfterTarget (T, T);
	bool deleteTarget (T);
	std::string getString ();
};

template <typename T>
SingleLinkList<T>::SingleLinkList ()
{
	this->header = new singleNode<T>;
	this->header->data = 0;
	this->header->next = this->header;
	this->footer = this->header;
}

template <typename T>
singleNode<T>* SingleLinkList<T>::createsingleNode (T data)
{
	singleNode<T>* tmp = new singleNode<T>;
	tmp->data = data;
	tmp->next = nullptr;
	return tmp;
}

template <typename T>
bool SingleLinkList<T>::empty () 
{
	return (this->header->data == 0);
}

template <typename T>
void SingleLinkList<T>::clear ()
{
	singleNode<T>* next = nullptr;
	singleNode<T>* target = nullptr;
	for (target = this->header->next;
		 target != this->header;
		 target = next)
	{
		next = target->next;
		delete target;
	}
	this->footer = this->header;
	this->header->next = this->header;
	this->header->data = 0;
}

template <typename T>
void SingleLinkList<T>::inverse ()
{
	/*inverse all*/
}

template <typename T>
void SingleLinkList<T>::insertFirst (T data)
{
	singleNode<T>* tmp = this->createsingleNode (data);
	tmp->next = this->header->next;
	this->header->next = tmp;
	if (this->header->data == 0)
		this->footer = tmp;
	this->header->data++;
}

template <typename T>
void SingleLinkList<T>::insertLast (T data)
{
	singleNode<T>* tmp = this->createsingleNode (data);
	tmp->next = this->header;
	this->footer->next = tmp;
	this->footer = tmp;
	this->header->data++;
}

template <typename T>
singleNode<T>* SingleLinkList<T>::findTarget (T t_data)
{
	singleNode<T>* target = nullptr;
	for (target = this->header->next;
		 target != this->header && target->data != t_data;
		 target = target->next);
	if (target == this->header)
		return nullptr;
	return target;
}

template <typename T>
singleNode<T>* SingleLinkList<T>::findBeforeTarget (T t_data)
{
	singleNode<T>* before = nullptr;
	singleNode<T>* target = nullptr;
	for (target = this->header->next, before = this->footer;
		 target != this->header && target->data != t_data;
		 before = target, target = target->next);
	if (target == this->header)
		return nullptr;
	return before;
}

template <typename T>
bool SingleLinkList<T>::insertBeforeTarget (T t_data, T data)
{
	singleNode<T>* tmp = this->createsingleNode (data);
	singleNode<T>* before = this->findBeforeTarget (t_data);
	if (before == nullptr) return false;
	singleNode<T>* target = before->next;
	tmp->next = target;
	before->next = tmp;
	this->header->data++;
	return true;
}

template <typename T>
bool SingleLinkList<T>::insertAfterTarget (T t_data, T data)
{
	singleNode<T>* tmp = this->createsingleNode (data);
	singleNode<T>* target = this->findTarget(t_data);
	if (target == nullptr) return false;
	if (this->footer == target)
		this->footer = tmp;
	tmp->next = target->next;
	target->next = tmp;
	this->header->data++;
	return true;
}

template <typename T>
bool SingleLinkList<T>::deleteTarget (T t_data)
{
	singleNode<T>* before = this->findBeforeTarget (t_data);
	if (before == nullptr) return false;
	singleNode<T>* target = before->next;
	before->next = target->next;
	delete target;
	this->header->data--;
	return true;
}


template <typename T>
std::string SingleLinkList<T>::getString ()
{
	char buffer[32];
	std::string tmp = "";
	singleNode<T>* target;
	for (target = this->header->next; target != this->header; target = target->next)
	{
		tmp += itoa (target->data, buffer, 10);
		tmp += "->";
	}
	return tmp;
}