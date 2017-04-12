#pragma once
template <typename T>
struct Node
{
	T data;
	Node *next;
};

template <typename T>
class Stack
{
private:
	Node<T> *top;
public:
	Stack ();
	void push (T value);
	T pop ();
	bool empty ();
	void clear ();
};

template <typename T>
Stack<T>::Stack ()
{
	this->top = nullptr;
}

template <typename T>
void Stack<T>::push (T value)
{
	Node<T> *tmp = this->top;
	this->top = new Node<T>;
	this->top->data = value;
	this->top->next = tmp;
}

template <typename T>
T Stack<T>::pop ()
{
	T value = this->top->data;
	Node<T> *tmp = this->top;
	this->top = this->top->next;
	delete tmp;
	return value;
}

template <typename T>
bool Stack<T>::empty ()
{
	return (this->top == nullptr);
}

template <typename T>
void Stack<T>::clear ()
{
	if (!this->empty ())
	{
		delete this->top;
		this->top = nullptr;
	}
}




