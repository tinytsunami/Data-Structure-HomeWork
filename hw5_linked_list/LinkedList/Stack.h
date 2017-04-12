#pragma once
template <typename T>
struct stackNode
{
	T data;
	stackNode *next;
};

template <typename T>
class Stack
{
private:
	stackNode<T> *top;
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
	stackNode<T> *tmp = this->top;
	this->top = new stackNode<T>;
	this->top->data = value;
	this->top->next = tmp;
}

template <typename T>
T Stack<T>::pop ()
{
	T value = this->top->data;
	stackNode<T> *tmp = this->top;
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




