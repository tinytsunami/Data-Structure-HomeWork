#pragma once

void swap (int &a, int &b)
{
	int t;
	t = a;
	a = b;
	b = t;
}

class Magicsquare
{
public:
	Magicsquare (int, int);
	int size;
	int **value;
	int **check();
private:
	void getOdd (int, int);
};

Magicsquare::Magicsquare (int n, int type)
{
	if (n == 2 || n == 0)
		return;
	//initialize
	this->size = n;
	int i, j;
	//create magic
	this->value = new int*[n];
	for (i = 0; i<n; i++)
	{
		this->value[i] = new int[n];
		for (j = 0; j<n; j++)
			this->value[i][j] = (-1);
	}
	//process
	if (n % 2 == 1)
		this->getOdd (n, type);
	else if (n % 2 == 0)
	{
		if (n % 4 == 0)
		{
			//get space
			int index = 0;
			int *tmp = new int[(this->size*this->size)/2];
			//set value
			int value = 1;
			for (i = 0; i < this->size; i++)
				for (j = 0; j < this->size; j++)
					this->value[i][j] = value++;
			//set switch
			for (i = 0; i < this->size; i++)
				for (j = 0; j < this->size; j++)
					if (i % 4 == 0 || i % 4 == 3)
					{
						if (j % 4 == 0 || j % 4 == 3)
							tmp[index++] = this->value[i][j];
					}
					else
					{
						if (!(j % 4 == 0 || j % 4 == 3))
							tmp[index++] = this->value[i][j];
					}
			//set switch
			for (i = 0; i < this->size; i++)
				for (j = 0; j < this->size; j++)
					if (i % 4 == 0 || i % 4 == 3)
					{
						if (j % 4 == 0 || j % 4 == 3)
							this->value[i][j] = tmp[--index];
					}
					else
					{
						if (!(j % 4 == 0 || j % 4 == 3))
							this->value[i][j] = tmp[--index];
					}
		}
		else
		{
			int k = (n - 2) / 4;
			int oddTmp = n / 2;
			//create a odd magic
			this->getOdd (oddTmp, 11);
			//copy to B, C, D
			for (i = 0; i < oddTmp; i++)
				for (j = 0; j < oddTmp; j++)
				{
					this->value[i][j + oddTmp] = this->value[i][j] + 2 * pow(oddTmp, 2);
					this->value[i + oddTmp][j] = this->value[i][j] + 3 * pow (oddTmp, 2);
					this->value[i + oddTmp][j + oddTmp] = this->value[i][j] + pow (oddTmp, 2);
				}
			//switch block-1
			for (i = 0; i < k; i++)
				for (j = 0; j < k; j++)
					swap (this->value[i + oddTmp][j], this->value[i][j]);
			//switch block-2
			for (i = (oddTmp/2) + 1; i < oddTmp; i++)
				for (j = 0; j < k; j++)
					swap (this->value[i + oddTmp][j], this->value[i][j]);
			//switch block-3
			for (j = (oddTmp / 2); j < ((oddTmp / 2) + k); j++)
				swap (this->value[(oddTmp / 2) + oddTmp][j], this->value[(oddTmp / 2)][j]);
			//switch block-4
			for (i = 0; i < oddTmp; i++)
				for (j = oddTmp + (oddTmp / 2); j < (oddTmp + (oddTmp / 2) + (k - 1)); j++)
					swap (this->value[i + oddTmp][j], this->value[i][j]);
		}
	}
}

void Magicsquare::getOdd (int n, int type)
{
	int i, j;
	int ox, oy;
	int value = 1;
	switch ((type / 10))
	{
	case 1:
		i = 0;
		j = n / 2;
		break;
	case 2:
		i = n / 2;
		j = 0;
		break;
	case 3:
		i = n / 2;
		j = 0;
		break;
	case 4:
		i = n - 1;
		j = n / 2;
		break;
	default:
		break;
	}
	type %= 10;
	while (value <= n*n)
	{
		this->value[i][j] = value;
		ox = i;
		oy = j;
		switch (type)
		{
		case 1:
			i = (i - 1) < 0 ? (n - 1) : (i - 1);
			j = (j + 1) % n;
			if (this->value[i][j] != (-1))
			{
				i = (ox + 1) % n;
				j = oy;
			}
			break;
		case 2:
			i = (i - 1) < 0 ? (n - 1) : (i - 1);
			j = (j - 1) < 0 ? (n - 1) : (j - 1);
			if (this->value[i][j] != (-1))
			{
				i = (ox + 1) % n;
				j = oy;
			}
			break;
		case 3:
			i = (i + 1) % n;
			j = (j - 1) < 0 ? (n - 1) : (j - 1);
			if (this->value[i][j] != (-1))
			{
				i = (ox - 1) < 0 ? (n - 1) : (ox - 1);
				j = oy;
			}
			break;
		case 4:
			i = (i + 1) % n;
			j = (j + 1) % n;
			if (this->value[i][j] != (-1))
			{
				i = (ox - 1) < 0 ? (n - 1) : (ox - 1);
				j = oy;
			}
			break;
		default:
			break;
		}
		value++;
	}
}

int** Magicsquare::check ()
{
	int **table = new int*[3];
	for (int i = 0; i < 2; i++)
		table[i] = new int[this->size];
	table[2] = new int[2];
	table[2][0] = 0;
	table[2][1] = 0;
	for (int i = 0; i < this->size; i++)
	{
		int row_tmp = 0;
		int col_tmp = 0;
		for (int j = 0; j < this->size; j++)
		{
			row_tmp += this->value[i][j];
			col_tmp += this->value[j][i];
		}
		table[0][i] = row_tmp;
		table[1][i] = col_tmp;
		table[2][0] += this->value[i][i];
		table[2][1] += this->value[i][this->size - i - 1];
	}
	return table;
}