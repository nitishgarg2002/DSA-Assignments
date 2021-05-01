#include <iostream>
#include <algorithm>
using namespace std;
void display(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
}
int add(int arr[],int n,int x){
    n++;
    arr[n-1]=x;
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
bool linearSearch(int arr[],int n,int x){
	for(int i=0;i<n;i++){
		if(arr[i]==x){
			return true;
			break;
		}
	}
	return false;
}
bool binarySearch(int arr[],int l,int r,int x){
	int n=r+1;
	sort(arr,arr+n);
	int mid=l+(r-l)/2;
	if(arr[mid]==x){
		return true;
	}
	else if(arr[mid]>x){
		return binarySearch(arr,l,mid-1,x);
	}
	else{
		return binarySearch(arr,mid+1,r,x);
	}
}

void get(int arr[],int n,int index){
	cout<<arr[index];
}
void setIndex(int arr[],int n,int x,int index){
	arr[index]=x;
		
}
int max(int arr[],int n){
	int max=0;
	for(int i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
}
int min(int arr[],int n){
	int min=1000000;
	for(int i=0;i<n;i++){
		if(arr[i]<min){
			min=arr[i];
		}
	}
}
void reverse(int arr[],int l,int r){
	
	while(l<r){
		swap(arr[l],arr[r]);
		l++;
		r--;
	}
}
void shift(int arr[],int n){
	
}

void rotate(int arr[],int n,int d){
	reverse(arr,0,d-1);
	reverse(arr,d,n-1);
	reverse(arr,0,n-1);
}
int main() {
	int n;
	cin>>n;
	int *arr;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
//	int pos;
//	cin>>pos;
	int x;
	cin>>x;
	int index;
	cin>>index;
//	get(arr,n,index);
	//set(arr,n,x,index);
//setIndex(arr,n,x,index);
//	reverse(arr,0,n-1);
//	display(arr,n);
//	int size=deleteElement(arr,n,x);
//	display(arr,size);
//	int size3=insertX(n,arr,x,pos);
	//cout<<binarySearch(arr,0,n-1,x);
	//cout<<linearSearch(arr,n,x);
//	int size2=add(arr,n,x);
//	display(arr,size2);
	
}

