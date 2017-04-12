#pragma once

int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};

enum Dir
{
	N, E, S, W
};

struct MyPoint
{
	int x;
	int y;
	Dir d;
};

class MyStack
{
public:
	MyStack (int size);
	void push (MyPoint data);
	MyPoint pop ();
	bool empty ();
private:
	MyPoint *value;
	int size;
	int top;
};

MyStack::MyStack (int size)
{
	this->value = new MyPoint[size];
	this->top = -1;
	this->size = size;
}

void MyStack::push (MyPoint data)
{
	this->value[++this->top] = data;
}

MyPoint MyStack::pop ()
{
	return this->value[this->top--];
}

bool MyStack::empty ()
{
	return (top == (-1));
}