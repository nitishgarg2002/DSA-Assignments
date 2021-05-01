#include <bits/stdc++.h>
using namespace std;

struct Node {
public:
	int data;
	struct Node* next;
	
	Node(int x){
		data=x;
		next=NULL;
	}
};
 Node* reverse(Node *head)
    {

        Node* current = head;
        Node *prev = NULL, *next = NULL;
 
        while (current != NULL) {
            next = current->next;
            current->next = prev;
 
            prev = current;
            current = next;
        }
        head = prev;
        return head;
    }
    void printList(Node* n)
{
	while (n != NULL) {
		cout << n->data << " ";
		n = n->next;
	}
}
int main() {
	int n;
	cin>>n;
	int data;
	cin>>data;
	struct Node *head = new Node(data);
	struct Node *temp = head;
	
	for(int i=0;i<n-1;++i){
		cin>>data;
		temp->next= new Node(data);
		temp = temp->next;
	}
	Node *t=reverse(head);
	printList(t);
	
}
