#include<iostream>
using namespace std;
int factorial(int n){
	if (n == 0)
        return 1;
    return n * factorial(n - 1);
}
int nCr(int n,int r){
	return factorial(n) / (factorial(r) * factorial(n - r));
}
int main() {
	int n,r;
	cin>>n>>r;
	if(n>=r){
		cout<<nCr(n,r);
	}
	else {
		cout<<"Invalid values";
	}
	
}
