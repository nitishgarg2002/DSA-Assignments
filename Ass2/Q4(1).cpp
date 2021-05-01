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
int countNodes(Node *head){
	int count=0;
	while(head!=NULL){
		count++;
		head=head->next;
	}
	return count;
}
int sum(Node *head){
	int s=0;
	while(head!=NULL){
		s+=head->data;
		head=head->next;
	}
	return s;
}
bool search(Node *head,int key){
	while(head!=NULL){
		if(head->data==key){
			return true;
		}
		else{
			head=head->next;
		}
	}
	return false;
}
void deleteNode(Node* head, int key)
{
    
    Node* temp = head;
    Node* prev = NULL;
     
    if (temp != NULL && temp->data == key)
    {
        head = temp->next;
        delete temp;           
        return;
    }
      else
    {
    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL)
        return;
    prev->next = temp->next;
    delete temp;
    }
}
bool isSorted( Node *head)
{
    if (head == NULL)
        return true;
    for (Node *t=head; t->next != NULL; t=t->next)
       if (t->data >= t->next->data)
            return false;
    return true;
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
	int key;
	cin>>key;
	printList(head);
	cout<<endl;
	cout<<countNodes(head)<<endl;
	cout<<sum(head)<<endl;
	cout<<search(head,key)<<endl;
	deleteNode(head,key);
	cout<<endl;
	printList(head);
	cout<<endl;
	cout<<isSorted(head);
}
