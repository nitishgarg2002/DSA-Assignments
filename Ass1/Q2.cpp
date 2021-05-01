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
	int sum=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		sum+=arr[i];
	}
	cout<<sum<<endl;
	int m=0;
	for(int i=0;i<n;i++){
		m=max(m,arr[i]);
	}
	cout<<m<<endl;
	int x;
	cin>>x;
	
	cout<<linearSearch(arr,n,x)<<endl;
	
}
