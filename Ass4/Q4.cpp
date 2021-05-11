
#include <bits/stdc++.h>
using namespace std;

class Stack {
    int top;
    int cap;
   
    public:
    
     Stack() {
        top=-1;
        cap=10;
    }
     int arr[10];
    
    int push(int x) {
        if(top==cap-1){
            return -1;
        }
        else {
            top++;
            arr[top]=x;
            return 1;
        }
    }
    int pop() {
        if(top==cap-1){
            return -1;
        }
        else {
          int  res=arr[top];
            top--;
            return 1;
        }
    }
    bool isFull() {
        if(top==cap-1)
        return 1;
        return 0;
    }
    bool isEmpty() {
        if(top==-1){
            return 1;
        } else{
            return 0;
        }
    }
    int stackTop() {
        if(top<0){
            return -1;
        } else {
            int res = arr[top];
            return res;
        }
    }
};
struct Queue {
   class Stack forward, reverse;
	void enQueue(int x)
	{
		while (!forward.isEmpty()) {
			reverse.push(forward.stackTop());
            cout<<"pushed to reverse stack"<<"\n";
			forward.pop();
		}
        cout<<"pushed to forward stack"<<"\n";
		forward.push(x);

		while (!reverse.isEmpty()) {
			forward.push(reverse.stackTop());
			reverse.pop();
		}
	}
	int deQueue()
	{

		if (forward.isEmpty()) {
			cout << "Q is Empty";
			exit(0);
		}

		int x = forward.stackTop();
		forward.pop();
		return x;
	}
    void isEmpty() {
        if (forward.isEmpty()) {
			cout << "Q is Empty";
			exit(0);
		}
        else {
            	cout << "Q is not Empty";
			exit(0);
        }
    }
     void isFull() {
        if (forward.isFull()) {
			cout << "Q is Full";
			exit(0);
		}
        else {
            	cout << "Q is not Full";
			exit(0);
        }
    }
};

int main()
{
	Queue q;
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        int x;
        cin>>x;
        q.enQueue(x);
    }
	
	cout <<"dequed"<< q.deQueue() << '\n';
	cout << q.deQueue() << '\n';
	cout << q.deQueue() << '\n';

	return 0;
}
