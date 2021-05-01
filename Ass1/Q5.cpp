#include<bits/stdc++.h>
using namespace std;
bool linearSearch(int arr[],int n,int x){
	for(int i=0;i<n;i++){
		if(x==arr[i]){
			return true;
		}
		else{
			return false;
		}
	}
}
int main() {
	int n;
	cin>>n;
	int arr[n];
	int x;
	cin>>x;
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
		
	}
	cout<<linearSearch(arr,n,x)<<endl;
}
