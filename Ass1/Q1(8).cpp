#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
void shiftRight(int arr[],int n){
	int temp[n];
	temp[0]=arr[n-1];
	//int j=1;
	for(int i=0;i<n-1;i++){
		temp[i+1]=arr[i];
	}
	for(int i=0;i<n;i++){
		arr[i]=temp[i];
	}
	
}
int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	shiftRight(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
}
