#include<bits/stdc++.h>
using namespace std;
void display(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
}
int add(int arr[],int n,int x){
    n++;
    arr[n]=x;
    return n;
}
int insertX(int n, int arr[], 
             int x, int pos) 
{ 
    int i; 
    n++; 
    for (i = n; i >= pos; i--) 
        arr[i] = arr[i - 1]; 
    arr[pos] = x; 
  
    return n; 
} 

int deleteElement(int arr[], int n, int x) 
{ 
   int i; 
   for (i=0; i<n; i++) 
      if (arr[i] == x) 
         break; 
  
   if (i < n) 
   { 
     n = n - 1; 
     for (int j=i; j<n; j++) 
        arr[j] = arr[j+1]; 
   } 
  
   return n; 
} 
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int pos;
	cin>>pos;
	int x;
	cin>>x;
//	int size=deleteElement(arr,n,x);
//	display(arr,size);
	int size2=insertX(arr,n,x,pos);
	
	insertX(n,arr,x,pos);
	display(arr,size2);
	
}

