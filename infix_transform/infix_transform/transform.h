#pragma once
#include <string>
#include "stack.h"

using namespace std;

bool beOperator (char c)
{
	bool flag = false;
	flag |= (c == '+');
	flag |= (c == '-');
	flag |= (c == '*');
	flag |= (c == '/');
	flag |= (c == '^');
	flag |= (c == '(');
	return flag;
}

int getSize (char c, bool out)
{
	switch (c)
	{
	case '+': return 1;
	case '-': return 1;
	case '*': return 2;
	case '/': return 3;
	case '^': return 4;
	case '(': return out ? 0 : 5;
	case '#': return 6;
	}
	return (-1);
}

int p (char c)
{
	return getSize (c, true);
}

int q (char c)
{
	return getSize (c, false);
}

string infix_transfrom (string input, bool prefix)
{
	if (input == "") return "";
	Stack<string> operated_stack;
	Stack<char> operator_stack;
	char tmp;

	for (unsigned int i = 0; i < input.length (); i++)
	{
		char &c = input[i];
		if (beOperator (c))
		{
			while (!operator_stack.empty ())
			{
				tmp = operator_stack.pop ();
				if (p (tmp) >= q (c))
				{
					string a = operated_stack.pop ();
					string b = operated_stack.pop ();
					if (prefix)
						operated_stack.push (b + a + tmp);
					else
						operated_stack.push (tmp + b + a);
				}
				else
				{
					operator_stack.push (tmp);
					break;
				}
			}
			operator_stack.push (c);
		}
		else if (c == ')')
		{
			while (!operator_stack.empty ())
			{
				tmp = operator_stack.pop ();
				if (tmp == '(')
					break;
				else
				{
					string a = operated_stack.pop ();
					string b = operated_stack.pop ();
					if (prefix)
						operated_stack.push (b + a + tmp);
					else
						operated_stack.push (tmp + b + a);
				}
			}
		}
		else
		{
			string t = "";
			operated_stack.push (t + c);
		}
	}
	while (!operator_stack.empty ())
	{
		tmp = operator_stack.pop ();
		string a = operated_stack.pop ();
		string b = operated_stack.pop ();
		if (prefix)
			operated_stack.push (b + a + tmp);
		else
			operated_stack.push (tmp + b + a);
	}
	return operated_stack.pop ();
}

string infix_to_prefix (string infix)
{
	return infix_transfrom (infix, true);
}

string infix_to_postfix (string infix)
{
	return infix_transfrom (infix, false);
}

string prefix_to_infix (string input)
{
	if (input == "") return "";
	Stack<string> operated_stack;
	Stack<char> operator_stack;
	string a, b;
	char oa, ob;

	for (unsigned int i = 0; i < input.length (); i++)
	{
		char &c = input[i];
		if (beOperator (c))
		{
			a = operated_stack.pop ();
			b = operated_stack.pop ();
			oa = (a.length () > 1 ? operator_stack.pop () : '#');
			ob = (b.length () > 1 ? operator_stack.pop () : '#');
			if (p (c) > p (oa)) a = '(' + a + ')';
			if (p (c) > p (ob)) b = '(' + b + ')';
			operated_stack.push (b + c + a);
			operator_stack.push (c);
		}
		else
		{
			string t = "";
			operated_stack.push (t + c);
		}
	}
	return operated_stack.pop ();
}

string postfix_to_infix (string input)
{
	if (input == "") return "";
	Stack<string> operated_stack;
	Stack<char> operator_stack;
	string a, b;
	char oa, ob;

	for (int i = input.length () - 1; i >= 0; i--)
	{
		char &c = input[i];
		if (beOperator (c))
		{
			a = operated_stack.pop ();
			b = operated_stack.pop ();
			oa = (a.length () > 1 ? operator_stack.pop () : '#');
			ob = (b.length () > 1 ? operator_stack.pop () : '#');
			if (p (c) > p (oa)) a = '(' + a + ')';
			if (p (c) > p (ob)) b = '(' + b + ')';
			operated_stack.push (a + c + b);
			operator_stack.push (c);
		}
		else
		{
			string t = "";
			operated_stack.push (t + c);
		}
	}
	return operated_stack.pop ();
}

string prefix_to_postfix (string input)
{
	if (input == "") return "";
	return infix_to_postfix (prefix_to_infix (input));
}

string postfix_to_prefix (string input)
{
	if (input == "") return "";
	return infix_to_prefix (postfix_to_infix (input));
}