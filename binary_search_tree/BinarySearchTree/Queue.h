#pragma once
template <typename T>
struct QueueNode
{
	T data;
	QueueNode *next;
};

template <typename T>
class Queue
{
private:
	QueueNode<T> *front;
	QueueNode<T> *back;
public:
	Queue ();
	void push (T value);
	T pop ();
	bool empty ();
	void clear ();
};

template <typename T>
Queue<T>::Queue ()
{
	this->front = new QueueNode<T>;
	this->back = this->front;
}

template <typename T>
void Queue<T>::push (T value)
{
	//new element
	QueueNode<T> *tmp = new QueueNode<T>;
	tmp->data = value;
	tmp->next = nullptr;
	//push to back
	this->back->next = tmp;
	this->back = tmp;
}

template <typename T>
T Queue<T>::pop ()
{
	if (!this->empty())
	{
		QueueNode<T>* tmp = this->front->next;
		T data = tmp->data;
		if (this->back == this->front->next)
			this->back = this->front;
		this->front->next = tmp->next;
		delete tmp;
		return data;
	}
}

template <typename T>
bool Queue<T>::empty ()
{
	return (this->back == this->front);
}

template <typename T>
void Queue<T>::clear ()
{
	while (!this->empty ())
		this->pop ();
}