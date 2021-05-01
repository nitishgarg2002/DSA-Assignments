#include <bits/stdc++.h>
using namespace std;
class Node
{
	public:
	int data;
	Node *next;
};

void push(Node **head_ref, int data)
{
	Node *ptr1 = new Node();
	Node *temp = *head_ref;
	ptr1->data = data;
	ptr1->next = *head_ref;
	if (*head_ref != NULL)
	{
		while (temp->next != *head_ref)
			temp = temp->next;
		temp->next = ptr1;
	}
	else
		ptr1->next = ptr1; 

	*head_ref = ptr1;
}

void printList(Node *head)
{
	Node *temp = head;
	if (head != NULL)
	{
		do
		{
			cout << temp->data << " ";
			temp = temp->next;
		}
		while (temp != head);
	}
}

int main()
{
	int n;
	cin>>n;
	
	Node *head = NULL;
	int data;
	for(int i=0;i<n;i++){
		cin>>data;
		push(&head,data);
	}

	cout << "Contents of Circular Linked List\n ";
	printList(head);

	return 0;
}

