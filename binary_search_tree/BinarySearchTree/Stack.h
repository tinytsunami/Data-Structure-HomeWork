#pragma once
template <typename T>
struct StackNode
{
	T data;
	StackNode *next;
};

template <typename T>
class Stack
{
private:
	StackNode<T> *top;
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
	StackNode<T> *tmp = this->top;
	this->top = new StackNode<T>;
	this->top->data = value;
	this->top->next = tmp;
}

template <typename T>
T Stack<T>::pop ()
{
	T value = this->top->data;
	StackNode<T> *tmp = this->top;
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
	while (!this->empty ())
		this->pop ();
}