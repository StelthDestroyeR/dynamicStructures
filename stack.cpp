#include "header.h"
using namespace std;
void push(node **top, int d)
{
	node *q = new node;
	q->val = d;
	q->prev = *top;
	*top = q;
}


int pop(node **top)
{
	int temp = (*top)->val;
	node *q = *top;
	*top = (*top)->prev;
	delete q;
	return temp;
}

void print(node *top)
{
	node*t;
	t = top;
	while (t)
	{
		
	}
}
