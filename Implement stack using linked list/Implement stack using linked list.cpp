
#include <iostream>
using namespace std;
class stack {
public:
	int data;
	stack* next;


};

bool isEmpty(stack* root)
{
	return !root;
}

stack* newnode(int data) {
	stack* new_node = new stack();
	new_node->data = data;
	new_node->next = NULL;
	return new_node;
}
stack* pop(stack* root)
{
	if (isEmpty(root)) {
		cout << " no elements found in stack...!" << endl;
		return root;
	}
	stack* temp = root;
	root = root->next;
	cout << temp->data << " pop from stack...!" << endl;
	free(temp);
	return root;
}

int peek(stack* root)
{
	if (isEmpty(root))
		return INT_MIN;
	return root->data;
}

stack* push(stack* root, int data)
{
	stack* newNode = newnode(data);
	if (root == NULL) {
		cout << newNode->data << " pushed into stack...!" << endl;
		return newNode;
	}
	newNode->next = root;
	cout << newNode->data << " pushed into stack...!" << endl;
	return newNode;
}

int main()
{
	stack* root = NULL;
	root = push(root, 2);
	root = push(root, 3);
	root = push(root, 4);
	root = push(root, 5);
	root = push(root, 6);

	while (root) {
		cout << peek(root) << endl;
		root = pop(root);
	}
	return 0;
}

