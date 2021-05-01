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
void printList(Node* n)
{
	while (n != NULL) {
		cout << n->data << " ";
		n = n->next;
	}
}
void merge(Node *head,Node *head1){
	while(1){
		if(head->next==NULL){
			head->next=head1;
			break;
		}
		head=head->next;
	}
}

int main() {
	int n;
	cin>>n;
	int m;
	cin>>m;
	int data;
	cin>>data;
	struct Node *head = new Node(data);
	struct Node *temp = head;
	
	
	
	for(int i=0;i<n-1;++i){
		cin>>data;
		temp->next= new Node(data);
		temp = temp->next;
	}
	
	int data1;
	cin>>data1;
	struct Node *head1 = new Node(data1);
	struct Node *temp1 = head1;
	for(int i=0;i<m-1;++i){
		cin>>data1;
		temp1->next= new Node(data1);
		temp1 = temp1->next;
	}
	merge(head,head1);
	printList(head);
	
}
