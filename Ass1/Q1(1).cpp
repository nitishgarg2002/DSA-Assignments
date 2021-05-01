#include<iostream>
using namespace std;
int main() {
	int first,last;
	cin>>first>>last;
	int sum=0;
	for(int i=first;i<=last;i++){
		sum+=i;
	}
	cout<<sum;
}
