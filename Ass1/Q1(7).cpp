#include<iostream>
#include <bits/stdc++.h> 
using namespace std;

int maxIndex(int arr[],int n){
	int  i, pos;
   int largest = 0;
   for(i=0; i<n; i++) {
      if(arr[i]>largest) {
         largest = arr[i];
         pos = i;
      }
  }
  return pos;
}
int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<maxIndex(a,n);
	
}


