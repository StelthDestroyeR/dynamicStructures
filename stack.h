struct node
{
	int val;
	node *prev;
};


void print(node** top);
void push(node **top, int d);
int pop(node **top);
